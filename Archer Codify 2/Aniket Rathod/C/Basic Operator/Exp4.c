// Write a C program to enter length and breadth of a rectangle and find its perimeter.
// formula:  2*l+b

#include<stdio.h>
#include<conio.h>

int main()
{
    int len,brd,per;
    
    printf("\n Enter the input for length & breadth of a rectangle: ");
    scanf("%d %d",&len,&brd);
    
    per=2*len+brd;
    printf("\n Parimeter of rectangle is : %d",per);
    
    return 0;
}
