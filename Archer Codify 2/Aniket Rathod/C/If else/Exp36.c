// if-else (Compressed)
//   Write a C program to input month number and print number of days in that month.

#include <stdio.h>
#include <conio.h>

int main()
{
    int wno;
    
    printf("\n Enter a Month No between 1 to 12: ");
    scanf("%d",&wno);
    
    
    if(wno==1 || wno==3 || wno==5|| wno==7|| wno==8 || wno==10|| wno==12)
    {
        printf("\n Days : 31");
    }
      
    else if(wno==4 || wno==6 || wno==9 || wno==11)
    {
        printf("\n Days : 30");
    }
    
    else if(wno==2)
    {
        printf("\n Days : 29");
    }
    
    else
    {
        printf("\n Invalid Input");
    }
    
    return 0;
}