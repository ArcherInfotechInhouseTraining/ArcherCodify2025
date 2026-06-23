//Write a C program to find all prime factors of a number.

#include<stdio.h>

void main()
{

    int n ,i,d=2;

    printf("Enter n number:");
    scanf("%d",&n);

     for(i=2;i<=n;i++)
     {
         int flag=0;
         if(n%i==0)
         {

                   while(d<= (i/2))
                     {
                       if(i%d==0)
                        {
                           flag=1;

                            break;
                        }
                           d++;
                       }

                       if(flag==0)
                         {
                           printf("%d\n",i);
                         }

                  }
           }

}
