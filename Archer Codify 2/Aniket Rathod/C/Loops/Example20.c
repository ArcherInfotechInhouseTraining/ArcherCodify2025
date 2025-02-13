// WAP to add All digits of number entered thw keyboard

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,sum;
    
    printf("\n Enter a 5 digit no: ");
    scanf("%d",&num);
    
    for(sum=0;num>0;num=num/10)
    {
        sum=sum+(num%10);
    }
    printf("\n Addition of numbers is: %d",sum);
    
    return 0;
}