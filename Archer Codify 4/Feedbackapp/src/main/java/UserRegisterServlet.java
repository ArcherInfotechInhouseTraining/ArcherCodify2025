import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLIntegrityConstraintViolationException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/UserRegisterServlet")  //maps servlet to a URL.

public class UserRegisterServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String name = req.getParameter("name");
        String email = req.getParameter("email");
        String password = req.getParameter("password");

        resp.setContentType("text/html");
        PrintWriter out = resp.getWriter();

        try (Connection con = DBConnection.getConnection()) {
            PreparedStatement ps = con.prepareStatement(
                "INSERT INTO users (name, email, password) VALUES (?, ?, ?)"
            );
            ps.setString(1, name);
            ps.setString(2, email);
            ps.setString(3, password);

            int rowsInserted = ps.executeUpdate();

            out.println("<!DOCTYPE html>");
            out.println("<html><head><title>Registration Result</title>");
            out.println("<style>");
            out.println("body { font-family: Arial, sans-serif; background: #f0f8ff; display: flex; align-items: center; justify-content: center; height: 100vh; margin: 0; }");
            out.println(".container { width: 500px; background: #fff; padding: 40px; border-radius: 15px; box-shadow: 0 0 20px rgba(0,0,0,0.2); text-align: center; }");
            out.println("h3 { font-size: 24px; margin-bottom: 25px; }");
            out.println("a { text-decoration: none; color: #fff; background: #28a745; padding: 12px 30px; border-radius: 8px; font-size: 16px; }");
            out.println("a:hover { background: #218838; }");
            out.println("</style></head><body>");
            out.println("<div class='container'>");

            if (rowsInserted > 0) {
                out.println("<h3 style='color: green;'>Registration Successful!</h3>");
                out.println("<a href='user_login.html'>Go to Login</a>");
            } else {
                out.println("<h3 style='color: red;'>Registration failed. Please try again.</h3>");
                out.println("<a href='user_register.html'>Try Again</a>");
            }

            out.println("</div></body></html>");

        } catch (SQLIntegrityConstraintViolationException e) {
            out.println("<html><head><title>Error</title>");
            out.println("<style>");
            out.println("body { font-family: Arial, sans-serif; background: #fff3f3; text-align: center; padding-top: 100px; }");
            out.println(".error-box { display: inline-block; background: #ffe0e0; padding: 40px; border-radius: 10px; box-shadow: 0 0 10px rgba(255,0,0,0.2); }");
            out.println("a { text-decoration: none; color: white; background: red; padding: 10px 20px; border-radius: 5px; margin-top: 20px; display: inline-block; }");
            out.println("a:hover { background: #cc0000; }");
            out.println("</style></head><body>");
            out.println("<div class='error-box'>");
            out.println("<h3 style='color:red;'> Email already registered!</h3>");
            out.println("<a href='user_register.html'>Go Back</a>");
            out.println("</div></body></html>");
        } catch (Exception e) {
            e.printStackTrace();
            out.println("<html><head><title>Error</title><style>body{text-align:center;font-family:Arial;}</style></head><body>");
            out.println("<h3 style='color:red;'> Server Error: " + e.getMessage() + "</h3>");
            out.println("<a href='user_register.html'>Go Back</a>");
            out.println("</body></html>");
        }
    }
}
