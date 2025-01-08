//Write a C program to count number of digits in a number.

#include<stdio.h>
void main()
{
    int no,cnt;

    printf("Enter Digit :\n");
    scanf("%d",&no);

    while(no!=0)
    {

        cnt++;
        no=no/10;
    }
    printf("Count is : %d",cnt);

}
