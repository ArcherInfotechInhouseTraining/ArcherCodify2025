// if-else
//   Write a C program to input month number and print number of days in that month.

#include <stdio.h>
#include <conio.h>

int main()
{
    int wno;
    
    printf("\n Enter a Month No between 1 to 12: ");
    scanf("%d",&wno);
    
    if(wno==1)
    {
        printf("\n January : Days : 31");
    }
    else if(wno==2)
    {
        printf("\n February : Days : 29");
    }
    else if(wno==3)
    {
        printf("\n March : Days : 31");
    }
    else if(wno==4)
    {
        printf("\n April : Days : 30");
    }
    else if(wno==5)
    {
        printf("\n May : Days : 31");
    }
    else if(wno==6)
    {
        printf("\n June : Days : 30");
    }
    else if(wno==7)
    {
        printf("\n July : Days : 31");
    }
    else if(wno=8)
    {
        printf("\n August : Days : 31");
    }
    else if(wno=9)
    {
        printf("\n September : Days : 30");
    }
    else if(wno=10)
    {
        printf("\n October : Days : 31");
    }
    else if(wno=11)
    {
        printf("\n November : Days : 30");
    }
    else if(wno=12)
    {
        printf("\n December : Days : 31");
    }
    
    else
    {
        printf("\n Invalid Input");
    }
    
    
    return 0;
}