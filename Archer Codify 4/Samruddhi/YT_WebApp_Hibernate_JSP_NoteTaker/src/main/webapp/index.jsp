
<!doctype html>
<html lang="en">
<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <title>Note Taker : Home Page</title>
    <%@include file="all_js_css.jsp"%>
    <style>

        .hero-section {
            padding: 80px 20px;
            text-align: center;
        }
        .hero-section h1 {
            color: #4b0082; /* Indigo heading */
        }
        .hero-section p {
            color: #333; /* Dark gray subtext */
        }
        .cta-btn {
            margin-top: 20px;
            background-color: #6f42c1; /* Bootstrap purple */
            color: white;
            border: none;
        }
        .cta-btn:hover {
            background-color: #5a32a3;
        }


    </style>

</head>
<body>

<div class="container-fluid p-0 m-0">

    <%@include file="navbar.jsp"%>

    <!-- Hero Section -->
    <div class="hero-section">
        <h1 class="display-4">Welcome to Note Taker</h1>
        <p class="lead">Organize your thoughts, manage your tasks, and save your important notes in one place.</p>
        <a href="add_note.jsp" class="btn btn-lg cta-btn">Start Writing</a>
    </div>

    <!-- Features Section -->
    <div class="container features mt-5">
        <div class="row text-center">
            <div class="col-md-4 mb-4">
                <div class="card shadow-sm">
                    <div class="card-body">
                        <i class="bi bi-journal-text display-4 text-primary"></i>
                        <h5 class="card-title mt-3">Create Notes</h5>
                        <p class="card-text">Write and save unlimited notes with titles, content, and date.</p>
                    </div>
                </div>
            </div>
            <div class="col-md-4 mb-4">
                <div class="card shadow-sm">
                    <div class="card-body">
                        <i class="bi bi-pencil-square display-4 text-success"></i>
                        <h5 class="card-title mt-3">Edit Notes</h5>
                        <p class="card-text">Update your notes anytime with ease and convenience.</p>
                    </div>
                </div>
            </div>
            <div class="col-md-4 mb-4">
                <div class="card shadow-sm">
                    <div class="card-body">
                        <i class="bi bi-trash-fill display-4 text-danger"></i>
                        <h5 class="card-title mt-3">Delete Notes</h5>
                        <p class="card-text">Clean up and remove notes you no longer need.</p>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>

<!-- Footer -->
<footer class="bg-dark text-white mt-5 p-3 text-center">
    <p class="mb-0">&copy; 2025 Note Taker App | Built by Samruddhi</p>
    <small>Organize your thoughts with ease</small>
</footer>


</body>
</html>
