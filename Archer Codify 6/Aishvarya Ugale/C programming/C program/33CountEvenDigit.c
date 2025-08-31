  /* Enter any number and count the even digits in that number
        e.g.
            no=34562,       Even Digit Count: 3

            */


#include<stdio.h>
void main()
{
    int no,cnt,rem;

    printf("Enter Number :");
    scanf("%d",&no);

    for(cnt=0;no!=0;no=no/10)
    {
       rem=no%10;
        if(rem%2==0)
        {
            cnt++;
        }


    }
    printf("Even Digit is : %d",cnt);
}
