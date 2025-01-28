#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isogram(const char *phr) 
{
    bool seen[26] = {false}; 
    while (*phr)
    {
        if (isalpha(*phr)) 
        { 
            char lower = tolower(*phr);
            int index = lower - 'a';
            if (seen[index]) 
            {
                return false; 
            }
            seen[index] = true; 
        }
        phr++; 
    }
    return true; 
}

int main()
{
    char input[256];
    printf("Enter a word or phrase: ");
    fgets(input, sizeof(input), stdin);

    
    size_t length = strlen(input);
    if (length > 0 && input[length - 1] == '\n')
    {
        input[length - 1] = '\0';
    }

    if (isogram(input)) 
    {
        printf("\"%s\" is an isogram.\n", input);
    } else
    {
        printf("\"%s\" is not an isogram.\n", input);
    }

    return 0;
}
