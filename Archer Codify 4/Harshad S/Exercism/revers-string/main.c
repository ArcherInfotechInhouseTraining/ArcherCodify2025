#include <stdio.h>
#include <string.h>

void reverse(char *str) 
{
    int leng = strlen(str);
    for (int i = 0; i < leng / 2; i++) 
    {
        
        char temp = str[i];
        str[i] = str[leng - i - 1];
        str[leng - i - 1] = temp;
    }
}

int main()
{
    char inp[256];
    printf("Enter a string: ");
    fgets(inp, sizeof(inp), stdin);

    
    size_t leng = strlen(inp);
    if (leng > 0 && inp[leng - 1] == '\n') 
    {
        inp[leng - 1] = '\0';
    }

    reverse(inp);

    printf("Reversed string: \"%s\"\n", inp);

    return 0;
}
