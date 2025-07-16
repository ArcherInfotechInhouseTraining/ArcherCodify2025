
<style>
    .navbar-custom {
        background: linear-gradient(to right, #6a11cb, #2575fc); /* Gradient purple-blue */
    }
    .navbar-brand {
        font-weight: bold;
        font-size: 1.5rem;
        letter-spacing: 1px;
    }
    .nav-link {
        transition: 0.3s;
        font-size: 1.1rem;
    }
    .nav-link:hover {
        color: #ffd700 !important; /* Gold on hover */
    }
    .form-control {
        border-radius: 20px;
    }
    .btn-outline-light:hover {
        background-color: #fff;
        color: #2575fc;
        transition: 0.3s;
    }
</style>

<nav class="navbar navbar-expand-lg navbar-dark navbar-custom">
    <a class="navbar-brand" href="index.jsp"> Note Taker</a>

    <button class="navbar-toggler" type="button" data-toggle="collapse"
            data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent"
            aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
    </button>

    <div class="collapse navbar-collapse" id="navbarSupportedContent">
        <ul class="navbar-nav mr-auto ml-3">
            <li class="nav-item active">
                <a class="nav-link" href="index.jsp">Home</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="add_notes.jsp">Add Note</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="all_notes.jsp">Show Notes</a>
            </li>
        </ul>

        <form class="form-inline my-2 my-lg-0">
            <input class="form-control mr-sm-2" type="search" placeholder="Search notes..." aria-label="Search">
            <button class="btn btn-outline-light my-2 my-sm-0" type="submit">Search</button>
        </form>
    </div>
</nav>
