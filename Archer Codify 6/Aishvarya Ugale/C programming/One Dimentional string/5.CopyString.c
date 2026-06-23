//5.Write a C Program to copy the first string into the second string


#include<stdio.h>
void main()
{
    char str1[20],str2[20];
    int i=0;

    printf("Enter string:");
    gets(str1);

    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';

    printf("Copy string is: %s ",str2);
}
