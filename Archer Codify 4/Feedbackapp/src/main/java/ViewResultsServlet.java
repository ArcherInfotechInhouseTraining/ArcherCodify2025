import java.io.*;
import java.sql.*;
import java.util.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

@WebServlet("/ViewResultsServlet")
public class ViewResultsServlet extends HttpServlet {

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        try (Connection conn = DBConnection.getConnection()) {

            // Map to hold question details
            Map<Integer, String> questionTextMap = new LinkedHashMap<>();
            Statement qStmt = conn.createStatement();
            ResultSet qRs = qStmt.executeQuery("SELECT id, question_text FROM questions");
            while (qRs.next()) {
                questionTextMap.put(qRs.getInt("id"), qRs.getString("question_text"));
            }

            // Get all users who submitted feedback
            Statement userStmt = conn.createStatement();
            ResultSet userRs = userStmt.executeQuery("SELECT DISTINCT users.id, users.name, users.email FROM users JOIN feedback ON users.id = feedback.user_id");

            out.println("<html><head><title>View Feedback Results</title>");
            out.println("<style>");
            out.println("body { font-family: Arial; background: #f2f4f8; padding: 20px; }");
            out.println("table { width: 100%; border-collapse: collapse; background: white; margin-bottom: 30px; box-shadow: 0 2px 8px rgba(0,0,0,0.1); }");
            out.println("th, td { padding: 10px; border: 1px solid #ddd; text-align: center; }");
            out.println("th { background-color: #007bff; color: white; }");
            out.println("h2 { color: #333; }");
            out.println("</style></head><body>");
            out.println("<h2> Feedback Results</h2>");

            while (userRs.next()) {
                int userId = userRs.getInt("id");
                String name = userRs.getString("name");
                String email = userRs.getString("email");

                out.println("<h3> " + name + " (" + email + ")</h3>");
                out.println("<table>");
                out.println("<tr><th>Question</th><th>Rating</th><th>Max Marks</th></tr>");

                PreparedStatement fbStmt = conn.prepareStatement(
                        "SELECT question_id, rating, max_rating FROM feedback WHERE user_id = ?");
                fbStmt.setInt(1, userId);
                ResultSet fbRs = fbStmt.executeQuery();

                int totalScored = 0, totalMax = 0;

                while (fbRs.next()) {
                    int qid = fbRs.getInt("question_id");
                    int rating = fbRs.getInt("rating");
                    int max = fbRs.getInt("max_rating");
                    String questionText = questionTextMap.get(qid);

                    out.println("<tr>");
                    out.println("<td>" + questionText + "</td>");
                    out.println("<td>" + rating + "</td>");
                    out.println("<td>" + max + "</td>");
                    out.println("</tr>");

                    totalScored += rating;
                    totalMax += max;
                }

                double percent = (totalMax > 0) ? (totalScored * 100.0 / totalMax) : 0;

                out.println("<tr><th>Total</th><th>" + totalScored + "</th><th>" + totalMax + "</th></tr>");
                out.println("<tr><th colspan='3'>Overall Rating: " + String.format("%.2f", percent) + "%</th></tr>");
                out.println("</table>");
            }

            out.println("<a href='admin_dashboard.html'>Back to Dashboard</a>");
            out.println("</body></html>");

        } catch (Exception e) {
            e.printStackTrace();
            out.println("<h3>Error fetching results: " + e.getMessage() + "</h3>");
        }
    }
}
