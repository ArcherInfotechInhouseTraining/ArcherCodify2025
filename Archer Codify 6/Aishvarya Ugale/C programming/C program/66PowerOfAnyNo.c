//Write a C program to find power of any number x ^ y.

#include<stdio.h>

void main()
{
    int x,y,power,i,ans;

    printf("Enter Number :\n");
    scanf("%d",&x);

     printf("Enter power of the number :\n");
    scanf("%d",&y);
    i=1;
    ans=1;
    while(y>=i)
    {
        ans=ans*x;
        i++;
    }
    printf("Ans :%d",ans);
}
