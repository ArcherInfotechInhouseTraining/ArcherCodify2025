//Write a C program to check whether a number is palindrome or not

#include<stdio.h>
void main()
{

 int no,rev=0,rem,temp;

    printf("Enter Number:\n");
    scanf("%d",&no);
    temp=no;
    for(;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;
    }

    if(temp==rev)
    {
        printf("Number is Palindrome \n");
    }
    else
    {
        printf("Number is not Palindrome \n");
    }

}
