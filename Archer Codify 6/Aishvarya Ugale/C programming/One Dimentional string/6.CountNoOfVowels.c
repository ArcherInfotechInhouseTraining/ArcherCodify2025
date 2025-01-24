//6.Write a C Program to count the number of vowels in a string


#include<stdio.h>
void main()
{
     char str1[20];
    int i,vcnt=0;
     printf("Enter string:");
    gets(str1);

    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
        {
            vcnt++;
        }
    }
    printf("Vowels count = %d",vcnt);

}
