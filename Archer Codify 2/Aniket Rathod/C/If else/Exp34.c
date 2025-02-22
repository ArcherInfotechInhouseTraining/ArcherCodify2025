// if-else
//  Write a C program to input week number and print week day.

#include <stdio.h>
#include <conio.h>

int main()
{
    int wno;
    
    printf("\n Enter a Week No between 1 to 7: ");
    scanf("%d",&wno);
    
    if(wno==1)
    {
        printf("\n Sunday");
    }
    else if(wno==2)
    {
        printf("\n Monday");
    }
    else if(wno==3)
    {
        printf("\n Tuesday");
    }
    else if(wno==4)
    {
        printf("\n Wednesday");
    }
    else if(wno==5)
    {
        printf("\n Thrusday");
    }
    else if(wno==6)
    {
        printf("\n Friday");
    }
    else if(wno==7)
    {
        printf("\n Saturday");
    }
    
    else
    {
        printf("\n Invalid Input");
    }
    
    
    return 0;
}