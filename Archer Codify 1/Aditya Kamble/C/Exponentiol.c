#include<stdio.h>

int main()
{
    int x,y;   //2^3=2*2*2=8
    int result=1;

    printf("\n Enter a Value of X:");
    scanf("%d",&x);

    printf("\n Enter a value of Y:");
    scanf("%d",&y);
    
    int i=1;
    while(i<=y)
    {
        result=result*x;
        i++;
    }

    printf("\n %d ^ %d is %d",x,y,result);

    return 0;
}