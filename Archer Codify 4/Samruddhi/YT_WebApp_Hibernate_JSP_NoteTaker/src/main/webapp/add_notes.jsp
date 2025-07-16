
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Add Notes </title>
    <%@include file = "all_js_css.jsp"%>
</head>
<body>

<div class="container-fluid p-0 m-0">
    <%@include file = "navbar.jsp"%>

    <br>
    <h1>Please fill your Notes details </h1>

    <br>

    <!--This is Form  -->


    <form action="SaveNoteServlet" method="post">
        <div class="form-group">
            <label for="title">Note Title</label>
            <input name="title" required type="text" class="form-control" id="title"
                   aria-describedby="emailHelp"  placeholder="Enter here"/>
        </div>

        <div class="form-group">
            <label for="content">Note Content </label>
          <textarea name="content" required id="content" placeholder="Enter your content here "
          class="form-control" style="height: 170px"></textarea>
        </div>

       <div class="container text-center">
           <button type="submit" class="btn btn-primary">Add</button>
       </div>
    </form>

</div>

</body>
</html>
