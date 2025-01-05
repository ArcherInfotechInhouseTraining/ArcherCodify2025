//Write a C program to print all ASCII character with their values.


#include<stdio.h>

void main()
{
    int i;

    for(i=1;i<=127;i++)
    {
        printf("Ascii character : %c   Number: %d\n",i,i);
    }
}
