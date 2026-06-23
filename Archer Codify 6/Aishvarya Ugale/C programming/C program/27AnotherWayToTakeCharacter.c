/* There are another 3 different ways can be used to take the character as a input

		- using getch(), getche() and getchar()
		*/

#include<stdio.h>

void main()
{
    char ch;
    printf("Enter Any character :\n");
    ch=getch();
    printf("Character is :%c \n",ch);

    printf("Enter Any character :\n");
    ch=getche();
    printf("Character is :%c \n",ch);

    printf("Enter Any character :\n");
    ch=getchar();
    printf("Character is :%c \n",ch);




}
