#include<stdio.h>
int main()
{
    int dc=0;
    int no,temp,rem,sum=0;
    printf("\n Enter a No:");
    scanf("%d",&no);

    temp=no;
    while(no>0)
    {
        no=no/10;
        dc++;  //3
    }

    no=temp;
    while(no!=0)
    {
        rem=no%10;
        int mul=1;
        int i=0;
        while(i<dc)
        {
            mul=mul*rem;
            i++;
        }
        sum=sum+mul;
        no=no/10;
    }
    if(sum==temp)
    {
        printf("\n %d is a Armstrong no",temp);
    }
    else
    {
        printf("\n %d is not an Armstrong No:",temp);
    }

    return 0;
}