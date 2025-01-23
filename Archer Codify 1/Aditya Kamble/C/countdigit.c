#include<stdio.h>

int main()
{
    int no,rem,temp;
    int cnt =0;

    printf("\n Enter a No:"); //9866
    scanf("%d",&no);

     
    for(int d=9; d>=0; d-- )
    {
        cnt=0;
            for(temp=no ;  temp!=0; temp=temp/10) //986
            {
                rem=temp%10; 
                if(rem==d)
                {
                    cnt++;
                }
                
            }
            if(cnt>0)
            {
                 printf("\n the count of %d is %d:",d,cnt);
            }    
    }

    
    return 0;
}    
