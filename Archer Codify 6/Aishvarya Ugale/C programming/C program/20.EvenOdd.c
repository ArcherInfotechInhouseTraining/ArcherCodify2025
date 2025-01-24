// Enter the number and display the entered number is even or odd

#include<stdio.h>

void main()
{
    int no;
    printf("Enter no: ");
    scanf("%d",&no);

    if(no%2==0)
    {
        printf("Number is Even");

    }
    else
    {

        printf("Number is Odd");
    }

}
