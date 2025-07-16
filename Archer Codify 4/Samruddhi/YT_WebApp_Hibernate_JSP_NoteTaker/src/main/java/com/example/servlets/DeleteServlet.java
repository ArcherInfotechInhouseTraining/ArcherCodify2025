package com.example.servlets;

import com.example.helper.FactoryProvider;
import com.example.entity.Note;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.*;

import org.hibernate.Session;
import org.hibernate.Transaction;

import java.io.IOException;

@WebServlet("/DeleteServlet")
public class DeleteServlet extends HttpServlet {

    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        try {
            int noteId = Integer.parseInt(request.getParameter("note_id"));

            Session session = FactoryProvider.getFactory().openSession();
            Transaction tx = session.beginTransaction();

            Note note = session.get(Note.class, noteId);
            if (note != null) {
                session.delete(note);
            }

            tx.commit();
            session.close();

            response.sendRedirect("all_notes.jsp");

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
