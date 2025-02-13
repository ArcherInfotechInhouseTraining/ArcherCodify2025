// // Enter any no thw keyboard and find it is div by 3 or 5 or both or not by both - use if else nesting 

#include <stdio.h>
#include<conio.h>

int main()
{
    int No;
    
    printf("\n Enter a No: ");
    scanf("%d",&No);
    
    if(No%3==0)
    {
        if(No%5==0)
        {
            printf("\n NO is divisible by both 3 and 5");
        }
        else
        {
            printf("\n NO is divisible by 3");
        }
    }
    else
    {
        if(No%5==0)
        {
            printf("\n No is divisible by 5 only");
        }
        
        else
            
            printf("\n No is not divisible by both");
    }
    
    return 0;
}
