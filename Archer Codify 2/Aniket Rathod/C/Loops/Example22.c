// even and odd digit count

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,evsum=0,odsum=0,rem;
    
    printf("\n Enter a series of no: ");
    scanf("%d",&num);
    
    for(;num>0;num=num/10)
    {
        rem=num%10;
        
        if(num%2==0)
        {
            evsum++;
        }
        else
        {
            odsum++;
        }
    }
    
    printf("\n Even count is: %d",evsum);
    printf("\n Odd count is: %d",odsum);
    
    return 0;
    
}