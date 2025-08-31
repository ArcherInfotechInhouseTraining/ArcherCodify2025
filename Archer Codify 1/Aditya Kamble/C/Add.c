#include<stdio.h>

int main()
{
    int sum=0;
    int i=1;
    while(i<=3)
    {
        sum=sum+i;
        i++;
    }
    printf("\n The sum of all 3 no is %d",sum);

    return 0;

}