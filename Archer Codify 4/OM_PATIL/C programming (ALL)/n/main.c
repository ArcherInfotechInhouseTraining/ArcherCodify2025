#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,cnt,rem,i;
    int esum=0,osum=0,ecnt=0,ocnt=0;
    i=1;
    while(i<=15)
    {
        i++;

    cnt=0;
        while(no!=0)
        {
            rem=no%10;
            no=no/10;
            if(rem%2==0)
            {
                ecnt++;
                esum=esum+rem;
            }
            else
            {
                ocnt++;
                osum=osum+rem;
            }
        }
        }
        printf("\n even Count is: %d",ecnt);
        printf("\n even sum Count is: %d",esum);
        printf("\n odd Count is: %d",ocnt);
        printf("\n odd sum Count is: %d",osum);
        return 0;

}
