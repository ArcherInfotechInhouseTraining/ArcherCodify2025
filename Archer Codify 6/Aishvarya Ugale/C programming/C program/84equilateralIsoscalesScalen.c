//Write a C program to check whether the triangle is equilateral, isosceles or scalene
//triangle.

#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three sides of length:\n");
    scanf("%d%d%d",&a,&b,&c);



    if(a==b && b==c)
    {
        printf("Equilateral Triangle\n");
    }
    else if(a==b || b==c || a==c)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }
}


