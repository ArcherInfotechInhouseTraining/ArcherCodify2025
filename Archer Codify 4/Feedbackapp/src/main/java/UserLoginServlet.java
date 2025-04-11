import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import java.sql.*;

@WebServlet("/UserLoginServlet")
public class UserLoginServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException {
        String email = request.getParameter("email");
        String password = request.getParameter("password");

        try (Connection conn = DBConnection.getConnection()) {
            PreparedStatement stmt = conn.prepareStatement("SELECT id FROM users WHERE email = ? AND password = ?");
            stmt.setString(1, email);
            stmt.setString(2, password);

            ResultSet rs = stmt.executeQuery();
            if (rs.next()) {
                int userId = rs.getInt("id");

                // ✅ Create session and store user_id
                HttpSession session = request.getSession();
                session.setAttribute("user_id", userId);

                response.sendRedirect("feedback_form"); // redirect to feedback form
            } else {
                response.getWriter().println("<h3>Invalid credentials</h3>");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
