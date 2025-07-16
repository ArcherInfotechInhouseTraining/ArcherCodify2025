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
import java.io.PrintWriter;
import java.util.Date;
import java.util.Random;

@WebServlet("/SaveNoteServlet")
public class SaveNoteServlet extends HttpServlet {

    private static final long serialVersionUID =1L;

    public SaveNoteServlet() {
        super();
    }

    protected void doPost(HttpServletRequest request, HttpServletResponse response)throws ServletException, IOException{

        try {
            //title, content

            String title = request.getParameter("title");
            String content = request.getParameter("content");
            Note note = new Note(new Random().nextInt(100000), title, content, new Date());

            //System.out.println(note.getId()+ " : "+note.getTitle());

            //hibernate;Save()
            Session s = FactoryProvider.getFactory().openSession();
            Transaction tx = s.beginTransaction();
            s.save(note);
            tx.commit();
            s.close();

            response.setContentType("text/html");
            PrintWriter out = response.getWriter();
            out.println("<h1 style ='text-align:center;'> Note is added Successfully! </h1> ");
            out.println("<h1 style ='text-align:center;'> <a href='all_notes.jsp'> View all Notes </a> </h1> ");

        }catch (Exception e){
            e.printStackTrace();
        }
    }

}
