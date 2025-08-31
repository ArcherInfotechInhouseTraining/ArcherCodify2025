#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,sqroot;
    
    printf("\n Enter value for y: ");
    scanf("%d",&y);
    
    for(x=0;x<=y;x++)
    {
        if(y%x==x)
        {
            sqroot=x;
            break;
           
           printf("\n SquareRoot of the number is: %d",sqroot);
        }
    }
      
    return 0;
}