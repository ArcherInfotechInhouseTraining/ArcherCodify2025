#include<stdio.h>

int main()
{
    int sum_even=0;
    int odd_sum=0;
    int sum=0;
    int no;

    printf("\n Enter a 10 no's:");

    int k=1;

    while(k<=3)
    {
        scanf("%d",&no);
        if(no%2==0)
        {
            sum_even=sum_even+no; 
        }
        else
        {
            odd_sum=odd_sum+no;
            
        }

        sum=sum+no;    
        k++;
    }

    printf("\n the Sum of sum_even is %d",sum_even);
    printf("\n the sum of odd_sum is %d",odd_sum);
    printf("\n the sum of all no is %d",sum);


    return 0;
}