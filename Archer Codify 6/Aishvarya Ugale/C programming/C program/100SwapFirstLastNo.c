//Write a C program to swap first and last digits of a number.


#include<stdio.h>
void main()
{
    int no,nw,rev=0;
    printf("Enter Digit :\n");
    scanf("%d",&no);


    nw=no%10;

    no=no/10;

    for(;no>=10; no=no/10)
    {
        rev=(rev*10)+(no%10);

    }
    for(; rev>0;rev=rev/10)
    {
        nw=(nw*10)+(rev%10);

    }

    nw=nw*10+no;

    printf("%d",nw);

}
