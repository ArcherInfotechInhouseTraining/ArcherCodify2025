

#include <iostream>
int main() {
    // Declaring integer constants
    const int MAX_VALUE = 100;
    const int MIN_VALUE = 0;

    // Declaring floating-point constants
    const double PI = 3.14159;
    const float GRAVITY = 9.81f;

    // Declaring character constants
    const char NEWLINE = '\n';
    const char TAB = '\t';

    // Using constants in expressions
    int range = MAX_VALUE - MIN_VALUE;
    double circumference = 2 * PI * 5.0;

    // Outputting constants
    std::cout << "Range: " << range << NEWLINE;
    std::cout << "Circumference: " << circumference << NEWLINE;

   /// MIN_VALUE=10; /// error: assignment of read-only variable 'MIN_VALUE'|
    return 0;
}
