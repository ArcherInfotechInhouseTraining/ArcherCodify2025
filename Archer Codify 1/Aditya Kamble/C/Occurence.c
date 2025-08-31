#include<stdio.h>

int main()
{
    int no, rem;
    int digit;
    int cnt=0;
    printf("\n Enter any No:"); 
    scanf("%d",&no);

    printf("\n Enter any digit:"); 
    scanf("%d",&digit);
    
    int temp =no; 
    for( ; no!=0  ;no=no/10 ) 
    {
            rem=no%10;   
            if(rem==digit)
            {
                cnt++;
            }
    }
        
    if(cnt>0)
    {
            printf("%d is present at %d times",digit,cnt);
    }
    else
    {
        printf("not Present:");
    }   

     return 0;


}