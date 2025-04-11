import java.io.*;
import javax.servlet.*;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;
import java.sql.*;

@WebServlet("/AdminLoginServlet")
public class AdminLoginServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
    throws ServletException, IOException {
        String email = request.getParameter("email");
        String password = request.getParameter("password");

        try {
            Connection con = DBConnection.getConnection();
            PreparedStatement ps = con.prepareStatement("SELECT * FROM admins WHERE email=? AND password=?");
            ps.setString(1, email);
            ps.setString(2, password);
            ResultSet rs = ps.executeQuery();

            if (rs.next()) {
                // Redirect to dashboard after successful login
                response.sendRedirect("admin_dashboard.html");
            } else {
                // Send error message for invalid login
                response.setContentType("text/html");
                PrintWriter out = response.getWriter();
                out.println("<html><body style='text-align:center;'>");
                out.println("<h3 style='color:red;'>Invalid Email or Password</h3>");
                out.println("<a href='admin_login.html'>Back to Login</a>");
                out.println("</body></html>");
            }
            con.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
