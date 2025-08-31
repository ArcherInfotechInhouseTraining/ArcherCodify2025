// Buit-in or Library functions in

	These functiions are provided with compiler

		.h   - contains decl.
		.lib - pre compiled code

In C programming, header files contain definitions of functions and macros that are shared between different source files.
Here is a list of commonly used standard header files in C:

<stdio.h> - Standard Input/Output functions (e.g., printf(), scanf())
<stdlib.h> - General utility functions (e.g., memory allocation, process control, conversions)
<string.h> - String handling functions (e.g., strcpy(), strlen())
<math.h> - Mathematical functions (e.g., sqrt(), pow())
<time.h> - Date and time functions (e.g., time(), strftime())
<ctype.h> - Character type functions (e.g., isdigit(), isalpha())
<stdbool.h> - Boolean type and values (true, false)
<limits.h> - Sizes of basic types (e.g., INT_MAX, CHAR_MIN)
<float.h> - Limits of floating-point types (e.g., FLT_MAX)
<assert.h> - Diagnostics (e.g., assert())
<errno.h> - Error number macros (e.g., errno)
<signal.h> - Signal handling (e.g., signal(), raise())
<setjmp.h> - Non-local jumps (e.g., setjmp(), longjmp())
<stdarg.h> - Variable arguments handling (e.g., va_start(), va_end())
<stddef.h> - Common macros and types (e.g., size_t, NULL)
<wchar.h> - Wide characters handling functions
<wctype.h> - Wide character type functions
<locale.h> - Localization (e.g., setlocale())
<complex.h> - Complex arithmetic (available in C99)
<tgmath.h> - Type-generic math functions (available in C99)
These header files are part of the C standard library and provide commonly used functionalities across different C programs.


Functions in stdio.h (Standard Input/Output Library):


Input/Output Functions:
printf() - Print formatted output to the standard output (console).
scanf() - Read formatted input from the standard input (console).
fprintf() - Print formatted output to a file.
fscanf() - Read formatted input from a file.
putchar() - Write a character to the standard output.
getchar() - Read a character from the standard input.
puts() - Write a string to the standard output.
gets() - Read a string from the standard input (deprecated due to buffer overflow risks).
fputs() - Write a string to a file.
fgets() - Read a string from a file.



The <stdlib.h> header file:

Memory Allocation Functions:
malloc() - Allocates a block of memory dynamically.
calloc() - Allocates a block of memory for an array and initializes it to zero.
realloc() - Resizes a previously allocated block of memory.
free() - Frees dynamically allocated memory.

Process Control Functions:
exit() - Terminates the program.
abort() - Aborts the program abnormally.
atexit() - Registers a function to be called at program exit.
system() - Executes a system command.
Pseudo-random Number Generation Functions:
rand() - Generates a random integer.
srand() - Seeds the random number generator.

String Conversion Functions:
atoi() - Converts a string to an integer.
atol() - Converts a string to a long integer.
atof() - Converts a string to a floating-point number.
strtol() - Converts a string to a long integer.
strtoul() - Converts a string to an unsigned long integer.
strtod() - Converts a string to a double.
strtof() - Converts a string to a float.
strtoll() - Converts a string to a long long integer (C99).
strtoull() - Converts a string to an unsigned long long integer (C99).

Mathematical Functions:
abs() - Returns the absolute value of an integer.
labs() - Returns the absolute value of a long integer.
llabs() - Returns the absolute value of a long long integer (C99).
div() - Performs integer division and returns quotient and remainder.
ldiv() - Performs long integer division.
lldiv() - Performs long long integer division (C99).

Searching and Sorting Functions:
qsort() - Sorts an array.
bsearch() - Searches for an element in a sorted array.

Environment Functions:
getenv() - Retrieves the value of an environment variable.
putenv() - Modifies or adds an environment variable (non-standard).
setenv() - Sets an environment variable (non-standard but POSIX compliant).
unsetenv() - Unsets an environment variable (non-standard but POSIX compliant).
Multibyte and Wide Character Conversion Functions:
mbtowc() - Converts a multibyte character to a wide character.
wctomb() - Converts a wide character to a multibyte character.
mbstowcs() - Converts a multibyte string to a wide-character string.
wcstombs() - Converts a wide-character string to a multibyte string.



#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x=10, y=-45;

    printf("\n x=%d \t abs of x=%d",x,abs(x));
    printf("\n x=%d \t abs of x=%d",y,abs(y));

    return 0;
}


 list of functions from <string.h> in C programming, with a brief description for each:

strcpy() - Copies a string to another.
strncpy() - Copies a specified number of characters from one string to another.
strcat() - Concatenates two strings.
strncat() - Concatenates a specified number of characters from one string to another.
strlen() - Returns the length of a string.
strcmp() - Compares two strings.
strncmp() - Compares a specified number of characters from two strings.
strchr() - Finds the first occurrence of a character in a string.
strrchr() - Finds the last occurrence of a character in a string.
strstr() - Finds the first occurrence of a substring in a string.
strpbrk() - Finds the first occurrence of any character from a set in a string.
strspn() - Returns the length of the initial segment of a string that consists of characters in a set.
strcspn() - Returns the length of the initial segment of a string that consists of characters not in a set.
strtok() - Splits a string into tokens.
memset() - Fills a block of memory with a specified value.
memcpy() - Copies a block of memory.
memmove() - Moves a block of memory (safe for overlapping memory).
memcmp() - Compares two blocks of memory.
memchr() - Finds the first occurrence of a character in a block of memory.
strerror() - Returns a pointer to the textual representation of the current error code.



#include <stdio.h>
#include <string.h>
int main()
{
    char *s1="hello";
    char *s2="hello";
    char *s3="bye";

    printf("\n %d",strcmp(s1,s2));
    printf("\n %d",strcmp(s1,s3));

    return 0;
}


list of functions from <math.h> in C programming, with a brief description for each:

sin() - Computes the sine of an angle (in radians).
cos() - Computes the cosine of an angle (in radians).
tan() - Computes the tangent of an angle (in radians).
asin() - Computes the arc sine (inverse of sine).
acos() - Computes the arc cosine (inverse of cosine).
atan() - Computes the arc tangent (inverse of tangent).
atan2() - Computes the arc tangent of two variables (y/x).
sinh() - Computes the hyperbolic sine of a number.
cosh() - Computes the hyperbolic cosine of a number.
tanh() - Computes the hyperbolic tangent of a number.
exp() - Computes the exponential function e^N
log10() - Computes the logarithm (base 10).
pow() - Computes the power of a number (x raised to the power of y).
sqrt() - Computes the square root of a number.
ceil() - Rounds a number up to the nearest integer.
floor() - Rounds a number down to the nearest integer.
fabs() - Computes the absolute value of a floating-point number.
fmod() - Computes the remainder of division of two floating-point numbers.



#include <stdio.h>
#include <math.h>
int main()
{

    int x=2,y=3;
    double val=3.4;

    printf("\n %lf",pow(x,y));

    printf("\n %lf",ceil(val));
    printf("\n %lf",floor(val));
    return 0;
}











