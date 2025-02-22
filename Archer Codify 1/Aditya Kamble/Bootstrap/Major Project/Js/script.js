// Get all stars
const stars = document.querySelectorAll('.stars .fa-star');

// Add hover effect
stars.forEach(star => {
    star.addEventListener('mouseover', function() {
        const value = parseInt(this.getAttribute('data-value'));
        stars.forEach(star => {
            if (parseInt(star.getAttribute('data-value')) <= value) {
                star.classList.add('hover');
            } else {
                star.classList.remove('hover');
            }
        });
    });

    // Reset on mouse out
    star.addEventListener('mouseout', function() {
        stars.forEach(star => {
            if (!star.classList.contains('selected')) {
                star.classList.remove('hover');
            }
        });
    });

    // Handle click (select star)
    star.addEventListener('click', function() {
        const value = parseInt(this.getAttribute('data-value'));
        stars.forEach(star => {
            if (parseInt(star.getAttribute('data-value')) <= value) {
                star.classList.add('selected'); // Add selected class to stars <= clicked value
            } else {
                star.classList.remove('selected'); // Remove selected class for others
            }
        });
    });
});
