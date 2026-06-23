// WAP to count digits of number entered thw keyboard

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,cut=0;
    
    printf("\n Enter series of number: ");
    scanf("%d",&num);
    
    for(;num>0;num=num/10)
    {
        cut++;
    }
    
    printf("\n Count of numbers are: %d",cut);
    
    return 0;
}