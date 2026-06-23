// WAP to find the max from 3 nos using if else nesting

#include <stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    
    printf("\n Enter 3 nos: ");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>=b)
    {
        if(a>=c)
        {
            printf("\n A is greater: %d",a);
        }
        else
        {
            printf("\n C is greater: %d",c);
        }
    }
    if(b>=c)
    {
        printf("\n B is greater: %d",b);
        
    }
    
    else
    {
        printf("\n C is greater: %d",c);
    }
    
    return 0;
}
