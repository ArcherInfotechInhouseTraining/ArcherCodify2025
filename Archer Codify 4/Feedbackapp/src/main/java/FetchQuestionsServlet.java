import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import java.sql.*;

@WebServlet("/feedback_form")
public class FetchQuestionsServlet extends HttpServlet {

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        // Get session and user_id
        HttpSession session = request.getSession(false);
        Integer userId = (session != null) ? (Integer) session.getAttribute("user_id") : null;

        if (userId == null) {
            out.println("<html><body>");
            out.println("<h3 style='color:red;'>Please login first to access the feedback form.</h3>");
            out.println("<a href='user_login.html'>Login Here</a>");
            out.println("</body></html>");
            return;
        }

        try (Connection conn = DBConnection.getConnection()) {
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery("SELECT * FROM questions");

            out.println("<!DOCTYPE html><html><head><title>Feedback Form</title>");
            out.println("<style>");
            out.println("body { font-family: Arial; background: #f2f2f2; padding: 30px; }");
            out.println("form { background: white; padding: 25px; border-radius: 10px; width: 600px; margin: auto; box-shadow: 0px 0px 10px rgba(0,0,0,0.1); }");
            out.println("label { display: block; margin-top: 15px; font-weight: bold; }");
            out.println("input[type='number'] { width: 100%; padding: 8px; margin-top: 5px; border-radius: 5px; border: 1px solid #ccc; }");
            out.println("input[type='submit'] { margin-top: 20px; padding: 12px 25px; background: #007bff; color: white; border: none; border-radius: 6px; font-size: 16px; cursor: pointer; }");
            out.println("input[type='submit']:hover { background: #0056b3; }");
            out.println("</style></head><body>");

            out.println("<form method='post' action='SubmitFeedbackServlet'>");
            out.println("<h2> Submit Feedback</h2>");
            out.println("<input type='hidden' name='user_id' value='" + userId + "'>");

            while (rs.next()) {
                int qid = rs.getInt("id");
                String question = rs.getString("question_text");
                int maxMarks = rs.getInt("max_marks");

                out.println("<label for='q" + qid + "'>" + question + " (Max Marks: " + maxMarks + ")</label>");
                out.println("<input type='number' name='q" + qid + "' min='0' max='" + maxMarks + "' required>");
            }

            out.println("<input type='submit' value='Submit Feedback'>");
            out.println("</form>");
            out.println("</body></html>");

        } catch (Exception e) {
            out.println("<p>Error: " + e.getMessage() + "</p>");
        }
    }
}
