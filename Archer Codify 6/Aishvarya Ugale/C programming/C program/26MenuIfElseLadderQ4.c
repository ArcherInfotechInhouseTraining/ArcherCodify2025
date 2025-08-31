// Enter the no thw keyboard and display menu to perform following operations
//	option 1 - to check the number is positive or negative.
//	option 2 - to check number is divisible by 5 or not.

#include<stdio.h>
void main()
{
    int opt,no;
    printf("1.Check number is positive Or negative\n 2.Check Number is Divisible by 5 or not\n");
    scanf("%d",&opt);

    printf("Enter no : ");
    scanf("%d",&no);
    if(opt==1)
    {
        if(no>0)
        {
            printf("Number is Positive \n");

        }
        else
        {
            printf("Number is Negative \n");
        }
    }
    else if(opt==2)
    {
        if(no%5==0)
        {
            printf("Number is Divisible by 5\n");
        }
        else{
            printf("Number is Not Divisible by 5\n");
        }
    }
    else{
        printf("Incorret Option\n");
    }


}
