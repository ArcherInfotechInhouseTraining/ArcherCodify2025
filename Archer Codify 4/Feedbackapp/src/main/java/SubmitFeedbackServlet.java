import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import java.sql.*;
import java.util.*;

@WebServlet("/SubmitFeedbackServlet")
public class SubmitFeedbackServlet extends HttpServlet {

    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        HttpSession session = request.getSession(false);
        Integer userId = (session != null) ? (Integer) session.getAttribute("user_id") : null;

        if (userId == null) {
            out.println("<html><body>");
            out.println("<h3>Please login first.</h3>");
            out.println("<a href='user_login.html'>Login</a>");
            out.println("</body></html>");
            return;
        }
s
        try (Connection conn = DBConnection.getConnection()) {
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery("SELECT id, max_marks FROM questions");

            Map<Integer, Integer> questionMaxMarks = new HashMap<>();
            while (rs.next()) {
                questionMaxMarks.put(rs.getInt("id"), rs.getInt("max_marks"));
            }

            int totalScored = 0;
            int totalMax = 0;

            PreparedStatement insertStmt = conn.prepareStatement(
                "INSERT INTO feedback (user_id, question_id, rating, max_rating) VALUES (?, ?, ?, ?)");

            for (Map.Entry<Integer, Integer> entry : questionMaxMarks.entrySet()) {
                int qid = entry.getKey();
                int max = entry.getValue();

                String ratingStr = request.getParameter("q" + qid);
                if (ratingStr != null && !ratingStr.isEmpty()) {
                    int rating = Integer.parseInt(ratingStr);
                    if (rating <= max && rating >= 0) {
                        insertStmt.setInt(1, userId);
                        insertStmt.setInt(2, qid);
                        insertStmt.setInt(3, rating);
                        insertStmt.setInt(4, max);
                        insertStmt.addBatch();

                        totalScored += rating;
                        totalMax += max;
                    }
                }
            }

            insertStmt.executeBatch();

            double percentage = (totalMax > 0) ? ((totalScored * 100.0) / totalMax) : 0;

            // HTML output with attractive UI and home button
            out.println("<!DOCTYPE html>");
            out.println("<html>");
            out.println("<head>");
            out.println("<title>Feedback Submitted</title>");
            out.println("<style>");
            out.println("body {");
            out.println("    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;");
            out.println("    background: linear-gradient(to right, #e0f7fa, #f5faff);");
            out.println("    margin: 0;");
            out.println("    padding: 0;");
            out.println("}");
            out.println(".container {");
            out.println("    max-width: 600px;");
            out.println("    margin: 80px auto;");
            out.println("    background: #ffffff;");
            out.println("    padding: 40px 30px;");
            out.println("    border-radius: 12px;");
            out.println("    box-shadow: 0 12px 25px rgba(0, 0, 0, 0.1);");
            out.println("    text-align: center;");
            out.println("}");
            out.println("h2 { color: #28a745; margin-bottom: 20px; }");
            out.println("p { font-size: 18px; color: #333; margin: 10px 0; }");
            out.println(".btn {");
            out.println("    display: inline-block;");
            out.println("    margin: 15px 10px 0 10px;");
            out.println("    text-decoration: none;");
            out.println("    padding: 12px 25px;");
            out.println("    border-radius: 8px;");
            out.println("    color: white;");
            out.println("    transition: 0.3s ease;");
            out.println("}");
            out.println(".feedback-btn { background: #007bff; }");
            out.println(".feedback-btn:hover { background: #0056b3; }");
            out.println(".home-btn { background: #17a2b8; }");
            out.println(".home-btn:hover { background: #117a8b; }");
            out.println("</style>");
            out.println("</head>");
            out.println("<body>");
            out.println("<div class='container'>");
            out.println("<h2>Thank you for your feedback!</h2>");
            out.println("<p><strong>Total Score:</strong> " + totalScored + " / " + totalMax + "</p>");
            out.println("<p><strong>Overall Rating:</strong> " + String.format("%.2f", percentage) + "%</p>");
            out.println("<a class='btn feedback-btn' href='feedback_form'>Go Back to Feedback</a>");
            out.println("<a class='btn home-btn' href='index.html'>Go to Home</a>");
            out.println("</div>");
            out.println("</body>");
            out.println("</html>");

        } catch (Exception e) {
            e.printStackTrace();
            out.println("<html><body><h3>Error: " + e.getMessage() + "</h3></body></html>");
        }
    }
}
