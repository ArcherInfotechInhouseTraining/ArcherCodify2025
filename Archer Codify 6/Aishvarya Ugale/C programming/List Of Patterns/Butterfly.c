#include<stdio.h>
void main()
{
    int i,j,n=4;
//Upperhalf
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        for(j=1;j<2*(n-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    //Lowerhalf


 for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        for(j=1;j<2*(n-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }

    }

