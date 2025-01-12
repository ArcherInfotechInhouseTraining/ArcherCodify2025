//Write a C program to print all alphabets from a to z.

#include<stdio.h>
void main()
{
    int i;
    printf("Albhabets A to Z:\n ");
    for(i=65;i<=90;i++)
    {
        printf("%3c",i);
    }
}
