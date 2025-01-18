//Write a C program to calculate profit or loss.
#include<stdio.h>

void main()
{
    int sp,cp,profit ,loss;

    printf("Enter selling price\n");
    scanf("%d",&sp);

    printf("Enter Cost price\n");
    scanf("%d",&cp);

    if(sp>cp)
    {
        profit= sp-cp;
        printf("Profit is :%d",profit);
    }
    else
    {
        loss=cp-sp;
        printf("Loss is:%d",loss);
    }


}
