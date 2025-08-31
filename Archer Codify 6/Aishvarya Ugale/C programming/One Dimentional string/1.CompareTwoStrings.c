//Write a C Program to compare two strings.


#include<stdio.h>
void main()
{
    char str1[10],str2[10];
    int i,j,k,flg=0;

    printf("Enter First String\n");
    gets(str1);

    printf("\nEnter Second String\n");
    gets(str2);


    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++);
    if(i==j)
    {
        for(k=0;str1[k]!='\0';k++)
        {
            if(str1[k]!=str2[k])
            {
                flg=1;
                break;
            }

        }
    }
    else
    {
        flg=1;
    }

    if(flg==0)
    {
        printf("String is matching\n");
    }
    else
    {
        printf("String is not  matching\n");
    }
}


