// WAP to input and display the array of 7 elements.


#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[7],i;
    
    printf("\n Enter Array Elements: ");
    for(i=0;i<7;i++)
    {
        scanf("\t %d",&arr[i]);
    }
    
    printf("\n Array Elements are:");
    for(i=0;i<7;i++)
    {
        printf("\t %d",arr[i]);
    }
    
    return 0;
}