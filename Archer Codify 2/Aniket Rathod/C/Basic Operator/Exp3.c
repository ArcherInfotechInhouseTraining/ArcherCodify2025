//  Write a C program to enter two numbers and perform all arithmetic operations.

#include<stdio.h>
#include<conio.h>

int main()
{
    float num1,num2,add,sub,mul,dev;
    int ch;
    
    printf("\n ---------------MENU-------------");
    
    printf("\n 1.Add \n 2.Sub \n 3.Mul \n 4.Dev \n");
    
    printf("\n Select a case to perform arithmatic operaton: ");
    scanf("%d",&ch);
    
    printf("\n Enter number 1 and 2: ");
    scanf("%f %f",&num1,&num2);
    
    switch(ch)
    {
        case 1:
        {
            add=num1+num2;
            printf("\n Addition is: %f",add);
            break;
        }
        
        case 2:
        {
            sub=num1-num2;
            printf("\n Substraction is: %f",sub);
            break;
        }
        
        case 3:
        {
            mul=num1*num2;
            printf("\n multiplication is: %f",mul);
            break;
        }
        
        case 4:
        {
            dev=num1/num2;
            printf("\n Division is: %f",dev);
            break;
        }
        
        
        default: 
        {
            printf("\n Invalid Input..!");
        }
    }
    
    return 0;
}