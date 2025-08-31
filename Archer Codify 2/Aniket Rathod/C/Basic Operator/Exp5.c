// Write a C program to enter length and breadth of a rectangle and find its area.
// formula:  area = length * breadth

#include<stdio.h>
#include<conio.h>

int main()
{
    int len,brd,area;
    
    printf("\n Enter the input for length & breadth of a rectangle: ");
    scanf("%d %d",&len,&brd);
    
    area=len*brd;
    printf("\n Area of a rectangle is: %d",area);
    
    return 0;
}
