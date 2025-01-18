//Write a C program to input any alphabet and check whether it is a vowel or
//consonant.

#include<stdio.h>

void main()
{
    int ch;
    printf("Enter character:\n");
    ch=getchar();

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("Alphabet is Vowel\n");
    }
    else{
        printf("Alphabet is Consonent \n");
    }
}
