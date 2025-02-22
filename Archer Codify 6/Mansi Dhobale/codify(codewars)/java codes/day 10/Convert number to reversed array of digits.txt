Problem:
Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example(Input => Output):
35231 => [1,3,2,5,3]
0 => [0]

Solution:

#include <stddef.h>
#include <inttypes.h>
#include <stdio.h>

void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
  if (n == 0)
  {
    digits[0] = 0;
    *length_out = 1;
  }
  else
  {
    *length_out = 0;
    while (n > 0)
    {
      digits[*length_out] = n % 10;
      n /= 10;
      *length_out += 1;
    }
  }
explanation:

//<stddef.h>: Provides definitions for size-related types (like size_t), and NULL.
//<inttypes.h>: Includes macros for printing integer types like PRIu64 for uint64_t.
//<stdio.h>: Contains functions for input/output operations like printf
#include <stddef.h>
#include <inttypes.h>
#include <stdio.h>

void digitize (uint64_t n, uint8_t digits[], size_t *length_out)//
n: a uint64_t (unsigned 64-bit integer), the number to be broken down into its digits.
digits[]: an array of uint8_t (unsigned 8-bit integers) to store the digits of n.
length_out: a pointer to a size_t variable where the length of the digits (number of digits in n) will be stored.
{
  if (n == 0)//if n is 0, there is only one digit, which is 0.
//The first element of the digits array is set to 0.
//The pointer length_out is dereferenced and set to 1, indicating there is one digit.

  {
    digits[0] = 0;
    *length_out = 1;
  }
  else
  {
    *length_out = 0;
    while (n > 0)
    {
      digits[*length_out] = n % 10;// This line extracts the last digit of n using the modulus operator (n % 10) and stores it in the digits array at the index indicated by *length_out.
      n /= 10;// The integer division (n /= 10) effectively removes the last digit from n, so in the next iteration, the next digit will be processed.

      *length_out += 1;// The length of the number increases by 1, as we have processed one more digit.
    }
  
