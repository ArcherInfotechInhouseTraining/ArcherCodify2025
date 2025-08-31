// if-else
// Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>
#include <conio.h>

int main()
{
    int ang1,ang2,ang3;
    int total=180,sum=0;
    
    printf("\n Enter the angles of Triangle: ");
    scanf("%d %d %d",&ang1,&ang2,&ang3);
    
    sum=ang1+ang2+ang3;
    printf("\n Total of 3 angles are: %d",sum);
    
    if(sum==total)
    {
        printf("\n Triangle is valid");
    }
    
    else
    {
        printf("\n Triangle is invalid");
    }
    
    return 0;
}