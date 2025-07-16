package com.example.servlets;

import com.example.entity.Note;
import com.example.helper.FactoryProvider;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import org.hibernate.Session;
import org.hibernate.Transaction;

import java.io.IOException;
import java.util.Date;

@WebServlet("/UpdateServlet")
public class UpdateServlet extends HttpServlet  {

    private static final long serialVersionUID =1L;

    public UpdateServlet() {
        super();
    }
    protected void  doPost(HttpServletRequest request, HttpServletResponse response)
    throws ServletException, IOException {

        try{
            String title = request.getParameter("title");
            String content =request.getParameter("content");

            int noteId = Integer.parseInt(request.getParameter("noteId").trim());

            Session s = FactoryProvider.getFactory().openSession();
            Transaction tx = s.beginTransaction();

             Note note = s.get(Note.class,noteId);

             note.setTitle(title);
             note.setContent(content);
             note.setAddedDate(new Date());


            tx.commit();
            s.close();

            response.sendRedirect("all_notes.jsp");


        }catch (Exception e){
            e.printStackTrace();
        }
    }

}
