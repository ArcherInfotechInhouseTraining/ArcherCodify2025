import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import java.io.*;
import java.sql.*;

@WebServlet("/ViewQuestionsServlet")
public class ViewQuestionsServlet extends HttpServlet {
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        out.println("<html><head><title>All Questions</title>");
        out.println("<style>");
        out.println("body { font-family: Arial, sans-serif; background-color: #f2f2f2; padding: 20px; }");
        out.println("h2 { text-align: center; color: #333; }");
        out.println("table { width: 80%; margin: auto; border-collapse: collapse; background: white; box-shadow: 0 0 10px rgba(0,0,0,0.1); }");
        out.println("th, td { padding: 12px 15px; border-bottom: 1px solid #ddd; text-align: center; }");
        out.println("th { background-color: #007bff; color: white; }");
        out.println("tr:hover { background-color: #f1f1f1; }");
        out.println(".btn { padding: 6px 12px; border-radius: 5px; font-weight: bold; text-decoration: none; }");
        out.println(".btn-edit { background-color: #28a745; color: white; }"); // Green
        out.println(".btn-edit:hover { background-color: #218838; }");
        out.println(".btn-delete { background-color: #dc3545; color: white; }"); // Red
        out.println(".btn-delete:hover { background-color: #c82333; }");
        out.println(".back { display: block; text-align: center; margin-top: 20px; }");
        out.println(".back a { background-color: #007bff; color: white; padding: 10px 20px; border-radius: 5px; text-decoration: none; }");
        out.println(".back a:hover { background-color: #0056b3; }");
        out.println("</style></head><body>");

        out.println("<h2>All Feedback Questions</h2>");
        out.println("<table>");
        out.println("<tr><th>ID</th><th>Question</th><th>Subject</th><th>Max Marks</th><th>Actions</th></tr>");

        try (Connection conn = DBConnection.getConnection()) {
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery("SELECT * FROM questions");

            while (rs.next()) {
                int id = rs.getInt("id");
                out.println("<tr><td>" + id + "</td><td>" +
                        rs.getString("question_text") + "</td><td>" +
                        rs.getString("subject") + "</td><td>" +
                        rs.getInt("max_marks") + "</td><td>" +
                        "<a class='btn btn-edit' href='EditQuestionServlet?id=" + id + "'>Edit</a> " +
                        "<a class='btn btn-delete' href='DeleteQuestionServlet?id=" + id + "'>Delete</a>" +
                        "</td></tr>");
            }

        } catch (Exception e) {
            e.printStackTrace();
            out.println("<tr><td colspan='5' style='color:red;'>Error fetching data.</td></tr>");
        }

        out.println("</table>");
        out.println("<div class='back'><a href='admin_dashboard.html'>Back to Dashboard</a></div>");
        out.println("</body></html>");
    }
}
