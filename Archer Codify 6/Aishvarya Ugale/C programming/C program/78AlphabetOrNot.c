//Write a C program to check whether character is an alphabet or not using a
//conditional operator.

#include<stdio.h>
void main()
{

    char ch;

    printf("Enter character\n");

    ch=getch();

    (ch>='a' && ch<='z' || ch>='A' && ch<='Z')? printf("%c Character is Alphabet\n",ch) : printf("%c Character is Not Albhabet\n",ch);
}
