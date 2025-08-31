// Enter any no and find No is div by 3 or No is div by 5 or No is div by both or not by both

#include<stdio.h>
void main()
{

    int no;

    printf("Enter no\n");
    scanf("%d",&no);
    if(no%3==0)
    {
        if(no%5==0)
        {
            printf("Number is divisible by both\n");
        }
        else{
            printf("Number is divisible by only 3\n");
        }

    }
    else if(no%5==0)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by both\n");
    }
}
