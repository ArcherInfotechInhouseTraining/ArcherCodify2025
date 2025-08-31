// Ensure GSAP and ScrollTrigger are loaded
gsap.registerPlugin(ScrollTrigger);

// Select all the span elements inside .wrapper
const spans = document.querySelectorAll('.wrapper span');

// Iterate over each span element and apply GSAP animations
spans.forEach((span, index) => {
  gsap.from(span, {
    scrollTrigger: {
      trigger: span,               // Trigger the animation when the span comes into view
      start: "top bottom",          // Start the animation when the top of the span reaches the bottom of the viewport
      end: "bottom top",            // End the animation when the bottom of the span reaches the top of the viewport
      scrub: 1,                     // Smoothly scrub the animation over 1 second
      markers: false,               // Set to true if you want to debug with start/end markers
      anticipatePin: 1,              // Ensure smooth pinning if required
    },
    x: index % 2 === 0 ? -400 : 400, // Animate from left (-100) or right (100)
    opacity: 1,                     // Start with an opacity of 0
    duration: 1,                    // Duration of the animation (you can adjust this)
    ease: "power2.out",             // Smooth ease for animation
  });
});

const elements = document.querySelectorAll('.hero .wrapper *');

// Iterate over each element and apply the animation
elements.forEach((element, index) => {
  gsap.from(element, {
    scrollTrigger: {
      trigger: element,             // Trigger the animation when the element comes into view
      start: "top bottom",          // Start the animation when the top of the element reaches the bottom of the viewport
      end: "bottom top",            // End the animation when the bottom of the element reaches the top of the viewport
      scrub: 0.5,                   // Smoothly scrub the animation during scrolling (0.5 seconds)
      markers: false,               // Set to true if you want to debug with start/end markers
      toggleActions: "play none none none" // Control play behavior when in/out of view
    },
    opacity: 1,                     // Fade the element in
    y: 50,                          // Animate the element from the bottom (50px up)
    duration: 1,                    // Duration of the animation (adjust as needed)
    delay: index * 0.2,             // Delay each element's animation by a little bit for sequential appearance
    ease: "power2.out",             // Use a smooth easing function
  });
});

// Wait for the DOM content to load
document.addEventListener("DOMContentLoaded", () => {
  // Initialize GSAP ScrollTrigger
  gsap.registerPlugin(ScrollTrigger);

  // ScrollTrigger animation for About Me section
  gsap.from("#about-section", {
    opacity: 0,
    y: 50, // Slide up effect from below
    duration: 1, // Duration of animation
    ease: "power4.out", // Smooth easing
    scrollTrigger: {
      trigger: "#about-section", // Trigger the animation when this element comes into view
      start: "top 80%", // Start animation when 80% of the element is in view
      end: "top 30%", // End the animation when 30% of the element is in view
      scrub: true, // Scrub animation with scroll
    },
  });

  // Animation for profile image
  gsap.from("#profile-img", {
    opacity: 0,
    scale: 0.5, // Initial scale for a zoom-in effect
    duration: 1,
    ease: "power4.out",
    scrollTrigger: {
      trigger: "#about-section",
      start: "top 80%",
      end: "top 30%",
      scrub: true,
    },
  });

  // Animation for About Me title
  gsap.from("#about-title", {
    opacity: 0,
    x: -100, // Slide in from the left
    duration: 1,
    ease: "power4.out",
    scrollTrigger: {
      trigger: "#about-section",
      start: "top 80%",
      end: "top 30%",
      scrub: true,
    },
  });

  // Animation for paragraph
  gsap.from("#about-paragraph", {
    opacity: 0,
    y: 30,
    duration: 1,
    ease: "power4.out",
    scrollTrigger: {
      trigger: "#about-section",
      start: "top 80%",
      end: "top 30%",
      scrub: true,
    },
  });

  // Animation for Download Resume button
  gsap.from("#download-resume", {
    opacity: 0,
    y: 20,
    duration: 1,
    ease: "power4.out",
    scrollTrigger: {
      trigger: "#about-section",
      start: "top 80%",
      end: "top 30%",
      scrub: true,
    },
  });
});

document.addEventListener("DOMContentLoaded", () => {
  const cursor = document.createElement("div");
  cursor.classList.add("cursor");
  document.body.appendChild(cursor);

  // Find the Section 5 element
  const section5 = document.querySelector(".section-5");

  // Variables for cursor movement
  let mouseX = 0;
  let mouseY = 0;
  let cursorX = 0;
  let cursorY = 0;
  const speed = 0.1; // Control the cursor movement speed

  // Track mouse position within section-5
  section5.addEventListener("mousemove", (e) => {
    mouseX = e.clientX;
    mouseY = e.clientY;
  });

  // Smoothly move the cursor with interpolation for smooth movement
  function moveCursor() {
    cursorX += (mouseX - cursorX) * speed; // Interpolate cursor position
    cursorY += (mouseY - cursorY) * speed;

    cursor.style.left = `${cursorX}px`;
    cursor.style.top = `${cursorY}px`;

    requestAnimationFrame(moveCursor);
  }

  moveCursor();

  // Handle showing/hiding cursor when entering and leaving section-5
  section5.addEventListener("mouseenter", () => {
    cursor.style.opacity = 1; // Fade in cursor when entering section 5
  });

  section5.addEventListener("mouseleave", () => {
    cursor.style.opacity = 0; // Fade out cursor when leaving section 5
  });
});


document.addEventListener("DOMContentLoaded", () => {
  let progress = 0;
  const loader = document.getElementById('loader');
  const percentageText = document.getElementById('percentageText');
  const circleProgress = document.querySelector('.circle-progress');
  
  // Simulating loading process with a setInterval (this can be replaced with actual loading logic)
  const interval = setInterval(() => {
    progress += 1; // Increment progress by 1 per interval
    percentageText.textContent = `${progress}%`; // Update percentage text
    const offset = 314 - (progress / 100) * 314; // Calculate the stroke dashoffset based on progress
    circleProgress.style.strokeDashoffset = offset; // Update progress on the circular bar

    if (progress === 100) {
      clearInterval(interval); // Stop the interval when loading reaches 100%
      
      // Add a delay before sliding up the loader
      setTimeout(() => {
        // Slide up the loader and show the main content
        loader.classList.add('slide-up');
        
        // Show the main content with fade-in effect
        const mainContent = document.getElementById('main-content');
        mainContent.classList.remove('hidden');
        mainContent.classList.add('visible');
      }, 500); // Adjust delay time here (500ms delay)
    }
  }, 30); // Adjust speed by changing the interval (smaller = faster)
});
