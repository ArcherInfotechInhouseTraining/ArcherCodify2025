#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no,digit,rem,cnt=0,tmp;
    printf("\n Enter the no: ");
    scanf("%d",&no);
    tmp=no;
    printf("\n Enter the digit: ");
    scanf("%d",&digit);

    for( ; no!=0 ; )
    {
        rem=no%10;
        if(rem==digit)
        {
            cnt++;
        }
        no=no/10;
    }
    if(cnt>0)
        printf("\n %d is present in %d, %d times",digit,tmp,cnt);
    else
        printf("\n %d is no present in %d",digit,tmp);
    return 0;
}


