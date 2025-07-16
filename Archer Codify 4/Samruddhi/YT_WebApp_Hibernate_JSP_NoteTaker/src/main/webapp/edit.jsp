<%@ page import="com.example.helper.FactoryProvider" %>
<%@ page import="org.hibernate.Transaction" %>
<%@ page import="org.hibernate.Session" %>
<%@ page import="com.example.entity.Note" %>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
    <%@include file="all_js_css.jsp"%>
</head>
<body>


<div class="container-fluid p-0 m-0">
    <%@include file = "navbar.jsp"%>
    <h1> Edit your notes </h1>
    <br>
    <%
        int noteId = Integer.parseInt(request.getParameter("note_id").trim());
        Session s= FactoryProvider.getFactory().openSession();
        Note note =(Note)s.get(Note.class, noteId);
    %>

    <form action="UpdateServlet" method="post">

        <input value="<%= note.getId()%>" name="noteId" type="hidden" />

        <div class="form-group">
            <label for="title">Note Title</label>
            <input name="title" required type="text" class="form-control" id="title"
                   aria-describedby="emailHelp"  placeholder="Enter here"
                  value="<%=note.getTitle()%>" />
        </div>

        <div class="form-group">
            <label for="content">Note Content </label>
            <textarea name="content" required id="content" placeholder="Enter your content here "
                      class="form-control" style="height: 250px">
                <%=note.getContent()%>
            </textarea>
        </div>

        <div class="container text-center">
            <button type="submit" class="btn btn-success">Save your note</button>
        </div>
    </form>

</div>

</body>
</html>
