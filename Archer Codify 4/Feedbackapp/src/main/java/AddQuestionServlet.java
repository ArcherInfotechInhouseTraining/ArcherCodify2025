

import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import java.io.IOException;
import java.sql.*;

@WebServlet("/AddQuestionServlet")
public class AddQuestionServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException {
        String question = request.getParameter("question_text");
        String subject = request.getParameter("subject");
        int maxMarks = Integer.parseInt(request.getParameter("max_marks"));

        try (Connection conn = DBConnection.getConnection()) {
            PreparedStatement ps = conn.prepareStatement("INSERT INTO questions (question_text, subject, max_marks) VALUES (?, ?, ?)");
            ps.setString(1, question);
            ps.setString(2, subject);
            ps.setInt(3, maxMarks);
            ps.executeUpdate();

            response.sendRedirect("question_management.html");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
