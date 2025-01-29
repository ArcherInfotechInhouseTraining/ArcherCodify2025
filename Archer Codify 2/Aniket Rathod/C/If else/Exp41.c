// if-else (Execution Not Done)
// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include<stdio.h>
#include<conio.h>

int main()
{
    float anga,base,angc,bhight,a;
    float s=0,area1=0,area2=0,area3=0;
    
    printf("\n Enter sides of the triange: ");
    scanf("%f %f %f %f %f",&anga,&base,&angc,&a,&bhight);
    
    
    area1=(0.86*a);
    printf("\n it is a equilateral triange: %f",area1);
    
    area2=(base*bhight/2);
    printf("\n it is a isosceles triange: %f",area2);
    
    s=(anga+base+angc)/2;
    area3=(s*(s-anga)*(s-base)*(s-angc));
    printf("\n it is a scalene triange: %f",area3);
    
    
    if(area1==area2 && area2==area3)
    {
        printf("\n equilateral triange, isosceles triange and scalene traingle");
    }
    
    else
    {
        printf("\n it is not a triangle");
    }
    
    
    return 0;
}