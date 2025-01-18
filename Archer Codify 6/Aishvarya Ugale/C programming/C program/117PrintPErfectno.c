//Write a C program to print all Perfect numbers between 1 to n

#include<stdio.h>
void main()
{

    int no,i,sum=0,j;

    printf("Enter Number\n");
    scanf("%d",&no);

    for(i=1;i<no;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
         {
           if(i%j==0)
             {
                  sum=sum+j;
              }
         }
    if(sum == i)
    {
        printf("%d\n",sum);

    }

    }


}
