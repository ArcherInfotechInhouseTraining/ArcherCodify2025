 /* Enter any character and find it is ucase, lcase, digit or special symbol

         A to Z --> 65 to 90
         a to z --> 97 to 122
         0 to 9 --> 48 to 57
         */

#include<stdio.h>
void main()
{
    char no,ch;
    printf("Enter character\n");
     fflush(stdin);
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("Character is UpperCase\n");
    }
    else if(ch>='a' && ch<='z')
    {
         printf("Character is LowerCase\n");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Character is Digit\n");

    }
    else
    {
        printf("Character is Symbol\n");
    }

}
