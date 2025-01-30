#include "sum_of_multiples.h"
#include <stddef.h>

unsigned int sum(const unsigned int *mul, size_t num, unsigned int limit)

{
    if (limit == 0) 
    {
        return 0;
    }

    int sum = 0;

    for (unsigned int i = 1; i < limit; i++) 
    {
        for (size_t j = 0; j < num; j++) 
        {
            if (mul[j] != 0 && i % mul[j] == 0) 
            {
                sum += i;
                break;  
            }
        }
    }

    return sum;
}
