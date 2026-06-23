// WAP to init and display the array of 5 nos
// using iterator i as a position indicator


#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5]={33,12,56,32,75};
    int i;
    
    for(i=0;i<5;i++)
    {
        printf("\t %d",arr[i]);
    }
    
    return 0;
}