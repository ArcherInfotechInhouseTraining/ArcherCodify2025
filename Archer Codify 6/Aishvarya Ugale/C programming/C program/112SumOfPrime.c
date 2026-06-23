//Write a C program to find sum of all prime numbers between 1 to n.

#include<stdio.h>

void main()
{

    int n ,i;

    printf("Enter n number:");
    scanf("%d",&n);
    int d=2,sum=0;

    for(i=2;i<n;i++)
    {
        int flag=0;
        while(d<= (i/2))
        {
            if(i%d==0)
            {
                flag=1;
                break;
            }
            d++;
        }
        if(i==1)
        {
            break;
        }
        if(flag==0)
        {

            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("sum:%d",sum);
}
