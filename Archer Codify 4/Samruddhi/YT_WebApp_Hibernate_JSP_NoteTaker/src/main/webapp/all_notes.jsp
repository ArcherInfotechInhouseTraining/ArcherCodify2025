<%@ page import="com.example.helper.FactoryProvider" %>
<%@ page import="org.hibernate.Session" %>
<%@ page import="org.hibernate.query.Query" %>
<%@ page import="com.example.entity.Note" %>
<%@ page import="java.util.List" %>
<%@ page import="java.util.*, org.hibernate.*, org.hibernate.query.Query, com.example.entity.Note, com.example.helper.FactoryProvider" %>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>All Notes : Note Taker </title>
  <%@include file="all_js_css.jsp"%>
</head>
<body>

<div class="container-fluid p-0 m-0">
  <%@include file = "navbar.jsp"%>
  <br>
  <h1>All Notes Page:  </h1>

    <div class="row">

        <div class="col-12">
            <%
                Session s = FactoryProvider.getFactory().openSession();
                Query q = s.createQuery("from Note");
                List<Note> list = q.list();
                for (Note note : list) {
                    %>


            <div class="card border-info mt-4" >
                <img class="card-img-top m-4 mx-auto" style="max-width: 70px" src="img/notes.png" alt="Card image cap">
                <div class="card-body px-5">
                    <h5 class="card-title"><%= note.getTitle()%></h5>
                    <p class="card-text">
                        <%= note.getContent()%>
                    </p>

                    <%--<p> <b class="text-primary" ><%=note.getAddedDate() %></b> </p>--%>

                    <div class="d-flex justify-content-end">
                        <p><b class="text-primary"><%= note.getAddedDate() %></b></p>
                    </div>


                    <div class="container text-center mt-3">
                      <a href="DeleteServlet?note_id=<%=note.getId()%>" class="btn btn-danger">Delete</a>
                      <a href="edit.jsp?note_id=<%=note.getId()%>" class="btn btn-primary">Update</a>

                  </div>
                </div>
            </div>

            <%
                }
                s.close();
            %>
        </div>

    </div>



</div>
</body>
</html>
