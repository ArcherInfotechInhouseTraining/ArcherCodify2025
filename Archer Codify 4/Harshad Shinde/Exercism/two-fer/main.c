#include <stdio.h>
#include "two_fer.h"

void two_fer(char *response, const char *n) 
{
    if (n == NULL)
    {
        sprintf(response, "One for you, one for me.");
    } 
    else 
    {
        sprintf(response, "One for %s, one for me.", n);
    }
}
