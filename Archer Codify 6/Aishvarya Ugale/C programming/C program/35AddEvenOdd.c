  /* Enter any no and add the even and odd digits from it separately

            24385   ==>       5 + 3 = 8
                          8 + 4 + 2 = 14
                          */


#include<stdio.h>
void main()
{
    int no,esum=0,osum=0,rem;

    printf("Enter Number :\n ");
    scanf("%d",&no);

    for( ;no!=0;no=no/10)
    {
        rem=no%10;
        if(rem%2==0)
        {
            esum=esum+rem;
        }
        else{
            osum=osum+rem;
        }
    }
    printf("Even no sum : %d\n",esum);
    printf("ODD no sum : %d",osum);

}
