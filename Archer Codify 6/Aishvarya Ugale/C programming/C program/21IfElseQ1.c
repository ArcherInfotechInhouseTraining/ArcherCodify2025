// WAP to enter the number thw keyboard and multi. it by 5 when
// it is less than 10 otherwise subtract 100 from it.

#include<stdio.h>

void main()
{
    int no,ans=0;

    printf("Enter no:");
    scanf("%d",&no);

    if(no<10)
    {
        printf("\n Number is less than 10");
        ans=no*5;
    }
    else
    {
        printf("\n Number is greater than 10");
        ans=no-100;
    }

    printf("ans: %d",ans);

}
