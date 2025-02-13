// enter the no and digit from keyboard
	// no=19939  digit=9	==>3
// check the appearance of digit in number 

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,digit,temp,rem,cnt=0;
    
    printf("\n Enter a sequence of number: ");
    scanf("%d",&num);
    
    temp==num;
    
    printf("\n Enter a digit: ");
    scanf("%d",&digit);
    
    for(;num!=0;)
    {
        rem=num%10;
        if(rem==digit)
        {
            cnt++;
        }
        num=num/10;
    }
    
    
    num=temp;
    if(cnt>0)
        printf("\n The digit %d is appeared in number %d and count is %d",digit,num,cnt);
    else
        printf("\n digit %d is not present in number %d",digit,temp);
        
        
    return 0;
}
