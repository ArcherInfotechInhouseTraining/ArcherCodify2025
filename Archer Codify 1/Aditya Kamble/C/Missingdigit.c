#include<stdio.h>

int main()
{
    int no, temp,digit,rem;
    int flg;

    printf(" \n Enter a any No:");
    scanf("%d",&no);


    temp=no;

    printf("\n Missing Values are:");

    for(digit=0; digit<10; digit++)
    {
    
        no = temp;
        flg=0;
        for( ; no!=0; no=no/10)
        {
            rem=no%10;
            if(rem==digit)
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
                  printf(" \n %d is not present in %d",digit,temp);
        }
    }
        return 0;
}