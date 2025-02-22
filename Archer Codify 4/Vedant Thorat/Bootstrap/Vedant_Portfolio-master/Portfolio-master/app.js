const header = document.querySelector("header");

const first_skill = document.querySelector(".skill:first-child");
const sk_counters = document.querySelectorAll(".counter span");
const progress_bars = document.querySelectorAll(".skills svg circle");

const ml_section = document.querySelector(".milestone");
const ml_counters = document.querySelectorAll(".number span");

const prt_selection = document.querySelector(".portfolio");
const zoom_icons = document.querySelectorAll(".zoom_icon")
const model_overlay = document.querySelector(".model-overlay");
const images = document.querySelectorAll(".images img");
const next_btn = document.querySelector(".next-btn");
const prev_btn = document.querySelector(".prev-btn");

const links = document.querySelectorAll(".nav-links");


const toogle_btn = document.querySelector(".toogle-btn");

const hamburger = document.querySelector(".hamburger");

let skillsPlayed = false;
let mlplayed = false;
window.addEventListener("scroll", () => {
    if(!skillsPlayed) skillsCounter();
    activeLink();

});


function updateCount(num, maxNum){
    let currentNum = +num.innerText;
    
    
    if(currentNum < maxNum){
        num.innerText = currentNum +1;
        setTimeout(() => {
            updateCount(num, maxNum);
        }, 12);
    }
}


// ----------------------sticky navebar-------------------

function stickyNavbar(){
    header.classList.toggle("scrolled", window.pageYOffset > 0);
    // console.log(window.pageyOffset > 0);
}

stickyNavbar();

window.addEventListener("scroll", stickyNavbar);


// ---------------------- Animation cool-------------------

let sr = ScrollReveal({
    duration: 2500,
    distance:"60px",
});

sr.reveal(".showcase-info", {delay:600});
sr.reveal(".showcase-image", {origin:"top", delay:700});

// ---------------------- Progress Show -------------------

function hasReached(el){
    let topPosition = el.getBoundingClientRect().top;
    if(window.innerHeight >= topPosition + el.offsetHeight) return true;
    return false;
}



    

function skillsCounter(){
    if(!hasReached(first_skill)) return;

    skillsPlayed = true;


    sk_counters.forEach((counter, i) => {
        let target = +counter.dataset.target;
        let strokeValue = 427 - 427 * (target / 100);

        progress_bars[i].style.setProperty("--target", strokeValue);

        setTimeout(() => {
            updateCount(counter, target);
        }, 400);
    });

    progress_bars.forEach(
        (p) => (p.style.animation = "progress 2s ease-in-out forwards")
    );

}

// ------------------------------- portfolio Filters Section-------------------------------
let mixer = mixitup(".portfolio-gallary", {
    selectors:{
        target:".prt-card",
    },
    animation:{
        duration:500,
    },
});

// --------------------------------- Model Overlay -------------------------------

let currentIndex = 0;

zoom_icons.forEach((icn,i) => icn.addEventListener("click", () => {
    prt_selection.classList.add("open");
    document.body.classList.add("stopScrolling");
    currentIndex = i;
    changeImage(currentIndex);
}));
model_overlay.addEventListener("click", () =>{ 
    prt_selection.classList.remove("open")
    document.body.classList.remove("stioScrolling")
});

prev_btn.addEventListener("click",() =>{
    if(currentIndex === 0)
    {
        currentIndex = 5;
    }
    else{
        currentIndex--;
    }
   
    changeImage(currentIndex);
})

next_btn.addEventListener("click",() =>{
    if(currentIndex === 5)
    {
        currentIndex = 0;
    }
    else{
        currentIndex++;
    }
   
    changeImage(currentIndex);
})

function changeImage(index){
    images.forEach(img => img.classList.remove("showImage"));
    images[index].classList.add("showImage");
}
// --------------------------- NAV - LINKS -----------------------------
function activeLink(){
    let sections = document.querySelectorAll("section[id]");
    let passedSections = Array.from(sections).map((sct, i) =>{
        return { 
            y: sct.getBoundingClientRect().top - header.offsetHeight,
            id: i,
        };
    })
    .filter((sct) => sct.y <= 0);


    let currSectionId = passedSections.at(-1).id;

    links.forEach((l) => l.classList.remove("active"));
    links[currSectionId].classList.add("active");
}
activeLink();

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