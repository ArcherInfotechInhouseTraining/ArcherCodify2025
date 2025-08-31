//Write a C program to check whether a number is even or odd using conditional
//operator
#include<stdio.h>
void main()
{

    int no;

    printf("Enter Number:\n ");
    scanf("%d",&no);


    (no%2==0)? printf("Number is Even\n") : printf("Number odd\n");

}
