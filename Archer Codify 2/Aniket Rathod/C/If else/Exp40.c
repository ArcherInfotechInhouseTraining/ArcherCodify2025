// if-else
// Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    int sum=0;
    
    printf("\n Enter sides of the triange: ");
    scanf("%d %d %d",&a,&b,&c);
    
    sum=a+b;
    
    if(sum>c)
    {
        printf("\n triange is valid");
    }
    else
    {
        printf("\n triange is invalid");
    }
    
    return 0;
}