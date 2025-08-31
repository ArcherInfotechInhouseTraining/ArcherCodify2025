/* different ways of String display

	1 - using %s as format specifier
	2 - using loop and %c - character by character display
	3 - using puts() function
*/

#include<stdio.h>
void main()
{
    char str[10]={'A','I','S','H','\0'};
    int i;

     printf("\nString 1:");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }

    printf("\nString 2:%s",str);
    printf("\nString 3:");
    puts(str);
}
