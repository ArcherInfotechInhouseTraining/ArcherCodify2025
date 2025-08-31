//Write a C program to input angles of a triangle and check whether triangle is valid
//or not.


#include<stdio.h>

void main()
{
    int angle1,angle2,angle3,tot;

    printf("Enter 3 angles\n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);

    tot=angle1+angle2+angle3;

    if(tot==180)
    {
        printf("Following Triangle is valid\n");
    }
    else{
        printf("Following Triangle is not valid\n");
    }
}
