#include "acronym.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *abbreviate(const char *phrase)
{
    if (!phrase || strlen(phrase) == 0) return NULL;

    char *result = malloc(32); 
    if (!result) return NULL;

    int x = 0;
    int n = 1;

    for (size_t i = 0; phrase[i] != '\0'; i++)
    {
        if (isalpha(phrase[i]) && n) 
        {
            result[x++] = toupper(phrase[i]);
            n = 0;
        }
        if (!isalpha(phrase[i]) && phrase[i] != '\'') 
        {
            n= 1;
        }
    }

    result[x] = '\0';
    return result;
}
