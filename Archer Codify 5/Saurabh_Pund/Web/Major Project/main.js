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
    x: index % 2 === 0 ? -100 : 100, // Animate from left (-100) or right (100)
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

