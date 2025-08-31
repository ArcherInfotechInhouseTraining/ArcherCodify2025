//3.Write a C Program to find frequency of characters.

#include<stdio.h>
void main()
{
    char str1[50];
    int i,j,cnt=0;
     printf("Enter string\n");
    gets(str1);

        if(str1>='a'||str1>='A'&&str1<='z'||str1<='Z')
        {
            printf("Upper Case:\n");
           for(j='A';j<='Z';j++)
           {     cnt=0;
                for(i=0;str1[i]!='\0';i++)
                 {
                     if(str1[i]==j)
                        {
                          cnt++;
                         }
                }
                if(cnt>0)
                {
                printf("%c=%dtimes\t",j,cnt);
                }
        }
        printf("\nLowercase:\n");
           for(j='a';j<='z';j++)
           {     cnt=0;
                for(i=0;str1[i]!='\0';i++)
                 {
                     if(str1[i]==j)
                        {
                          cnt++;
                         }
                }
                if(cnt>0)
                {
                printf("%c=%dtimes\t",j,cnt);
                }
        }
    }
}
