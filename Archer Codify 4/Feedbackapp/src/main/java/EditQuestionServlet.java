import java.io.*;
import java.sql.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
@WebServlet("/EditQuestionServlet")
public class EditQuestionServlet extends HttpServlet {

    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        int questionId = Integer.parseInt(request.getParameter("id"));

        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        try (Connection con = DBConnection.getConnection()) {
            PreparedStatement ps = con.prepareStatement("SELECT * FROM questions WHERE id = ?");
            ps.setInt(1, questionId);
            ResultSet rs = ps.executeQuery();

            if (rs.next()) {
                String questionText = rs.getString("question_text");
                String subject = rs.getString("subject");
                int maxMarks = rs.getInt("max_marks");

                out.println("<html><head><title>Edit Question</title><style>");
                out.println("body{font-family: Arial;background:#f4f4f4;padding:20px;}");
                out.println(".form-container{background:white;width:500px;margin:auto;padding:30px;border-radius:8px;box-shadow:0 0 10px #aaa;}");
                out.println("input[type='text'],input[type='number']{width:100%;padding:10px;margin:10px 0;border:1px solid #ccc;border-radius:4px;}");
                out.println("input[type='submit']{background-color:#007bff;color:white;padding:12px;border:none;width:100%;border-radius:4px;font-size:16px;}");
                out.println("input[type='submit']:hover{background-color:#0056b3;}");
                out.println("</style></head><body>");
                out.println("<div class='form-container'>");
                out.println("<h2>Edit Question</h2>");
                out.println("<form method='post' action='EditQuestionServlet'>");
                out.println("<input type='hidden' name='id' value='" + questionId + "'>");
                out.println("<label>Question Text:</label>");
                out.println("<input type='text' name='question_text' value='" + questionText + "' required>");
                out.println("<label>Subject:</label>");
                out.println("<input type='text' name='subject' value='" + subject + "' required>");
                out.println("<label>Maximum Marks:</label>");
                out.println("<input type='number' name='max_marks' value='" + maxMarks + "' required>");
                out.println("<input type='submit' value='Update Question'>");
                out.println("</form></div></body></html>");
            } else {
                out.println("<h3>Question not found!</h3>");
            }
        } catch (Exception e) {
            e.printStackTrace();
            out.println("<h3>Error: " + e.getMessage() + "</h3>");
        }
    }

    // Handle form submission here
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        try (Connection con = DBConnection.getConnection()) {
            int id = Integer.parseInt(request.getParameter("id"));
            String text = request.getParameter("question_text");
            String subject = request.getParameter("subject");
            int maxMarks = Integer.parseInt(request.getParameter("max_marks"));

            PreparedStatement ps = con.prepareStatement(
                "UPDATE questions SET question_text = ?, subject = ?, max_marks = ? WHERE id = ?"
            );
            ps.setString(1, text);
            ps.setString(2, subject);
            ps.setInt(3, maxMarks);
            ps.setInt(4, id);

            int updated = ps.executeUpdate();

            response.setContentType("text/html");
            PrintWriter out = response.getWriter();
            if (updated > 0) {
                out.println("<h3 style='color:green;'>Question updated successfully!</h3>");
                out.println("<a href='admin_dashboard.html'>Back to Dashboard</a>");
            } else {
                out.println("<h3 style='color:red;'>Update failed.</h3>");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
