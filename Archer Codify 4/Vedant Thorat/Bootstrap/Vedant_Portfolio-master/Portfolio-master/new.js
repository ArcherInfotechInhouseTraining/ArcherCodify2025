const header = document.querySelector("header");
const toogle_btn = document.querySelector(".toogle-btn");
const links = document.querySelectorAll(".nav-links");
const hamburger = document.querySelector(".hamburger");


// ------------- Navigation BAr -----------------

function stickyNavbar(){
    header.classList.toggle("scrolled", window.pageYOffset > 0);
    // console.log(window.pageyOffset > 0);
}

stickyNavbar();

window.addEventListener("scroll", stickyNavbar);


let firstTheame = localStorage.getItem("dark");

changeTheme(+firstTheame);

function changeTheme(isDark){
    if(isDark)
    {
        document.body.classList.add("dark");
        toogle_btn.classList.replace("uil-moon","uil-sun");
        localStorage.setItem("dark", 1);
    }
    else{
        document.body.classList.remove("dark");
        toogle_btn.classList.replace("uil-sun","uil-moon");
        localStorage.setItem("dark", 0);
    }
}
// ----------------- change the color of the script ---------------------------
toogle_btn.addEventListener("click", () => {
    changeTheme(!document.body.classList.contains("dark"));
})

// ----------------------- Responsive NAvigation bar --------------------
hamburger.addEventListener("click", () => {
    document.body.classList.toggle("open");
    document.body.classList.toggle("stopScrolling");
});

links.forEach(link =>link.addEventListener("click", () =>{
    document.body.classList.remove("open");
    document.body.classList.remove("stopScrolling");
}))