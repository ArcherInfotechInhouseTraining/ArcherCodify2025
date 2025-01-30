/* WAP to generate the two max numbers using the even and odd digits of number entered thw keyboard

		15478 ---> 84, 751
*/
#include<stdio.h>
void main()
{
    int no,d,evmx=0,odmx=0,tmp,rem;

    printf("\n Enter the no: ");
    scanf("%d",&no);
    tmp=no;
    for(d=9;d>=0;d--)
    {
        no=tmp;
        do
        {
            rem=no%10;
            if(rem==d)
            {
                if(d%2==0)
                    evmx=(evmx*10)+rem;
                else
                    odmx=(odmx*10)+rem;
            }
            no=no/10;
        }while(no!=0);
    }
    printf("\n Max Using Even digits: %d",evmx);
    printf("\n Max Using Even digits: %d",odmx);


}
