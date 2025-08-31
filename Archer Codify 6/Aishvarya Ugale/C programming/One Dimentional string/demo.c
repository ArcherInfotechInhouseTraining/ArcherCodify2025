//.Write a C Program to reverse any string/
#include <stdio.h>

int main()
{
    char str[50],temp[50];
    int i,j,top=-1;

    printf("enter string :");
    gets(str);

    for(j=0;str[j]!='\0';j++);
    for(i=0;str[i]!='\0';i++);
    {
        if(top<j)
        {
           top++;
           temp[top]=str[i];

        }

    }
    i=0;

    while(top!=(-1))
    {
        str[i]=temp[top];
        top--;
        i++;
    }

    printf("revers string is %s",str);


    return 0;
}
