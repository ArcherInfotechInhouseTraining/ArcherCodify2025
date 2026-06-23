// if-else
// Write a C program to count total number of notes in given amount.

#include <stdio.h>
#include <conio.h>

int main()
{
    int rs;
    int nt1=0,nt2=0,nt5=0,nt10=0,nt20=0,nt50=0,nt100=0,nt500=0,nt1000=0;
    
    printf("\n Enter an Amount: ");
    scanf("%d",&rs);
    
    if(rs>nt1)
    {
        nt1 = rs/1;
        nt1 -= rs*1;
        printf("\n Amount is in Notes: %d",nt1);
    }
    else if(rs>nt2)
    {
        nt2 = rs/2;
        nt2 -= rs*2;
        printf("\n Amount is in Notes: %d",nt2);
    }
    else if(rs>nt5)
    {
        nt5 = rs/5;
        nt5 -= rs*5;
        printf("\n Amount is in Notes: %d",nt5);
    }
    else if(rs>nt10)
    {
        nt10 = rs/10;
        nt10 -= rs*10;
        printf("\n Amount is in Notes: %d",nt10);
    }
    else if(rs>nt50)
    {
        nt50 = rs/50;
        nt50 -= rs*50;
        printf("\n Amount is in Notes: %d",nt50);
    }
    else if(rs>nt100)
    {
        nt100 = rs/100;
        nt100 -= rs*100;
        printf("\n Amount is in Notes: %d",nt100);
    }
    else if(rs>nt500)
    {
        nt500 = rs/500;
        nt500 -= rs*500;
        printf("\n Amount is in Notes: %d",nt500);
    }
    else if(rs>nt2)
    {
        nt1000 = rs/1000;
        nt1000 -= rs*1000;
        printf("\n Amount is in Notes: %d",nt1000);
    }
    
    else
    {
        printf("\n Invalid Input");
    }
    
    
    return 0;
}