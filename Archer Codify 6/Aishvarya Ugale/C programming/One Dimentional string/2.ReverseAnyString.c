//2.Write a C Program to reverse any string.
#include<stdio.h>
void main()
{
    char str1[50],temp[50];
    int top=-1,i,j;

    printf("Enter string\n");
    gets(str1);
    for(j=0;str1[j]!='\0';j++);
    for(i=0;str1[i]!='\0';i++)
    {
        if(top<j)
        {
            top++;
           temp[top]=str1[i];
        }
    }

    i=0;

    while(top!=(-1))
    {
        str1[i]=temp[top];
        top--;
        i++;
    }

    printf("Reverse string is :%s",str1);
}
