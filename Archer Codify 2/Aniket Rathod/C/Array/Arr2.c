// WAP to init and display the array of 5 nos
// It will become simple using the loop

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5]={33,12,56,32,75};
    int i,pos=0;
    
    for(i=10;i<15;i++)
    {
        printf("\t %d",arr[pos]);
        pos++;
    }
    
    return 0;
}