#include "pangram.h"
#include <stdbool.h>
#include <ctype.h>
#include <stddef.h>
bool is_pangram(const char *sentence) 
{
    if (sentence == NULL)
    {
        return false;
    }

    bool a[26] = {false};
    size_t i;

    for (const char *ptr = sentence; *ptr != '\0'; ++ptr)
    {
        if (isalpha(*ptr)) 
        {
            i = tolower(*ptr) - 'a';
            a[i] = true;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (!a[i]) 
        {
            return false;
        }
    }
    return true;
}
