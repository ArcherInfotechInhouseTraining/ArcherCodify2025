/* Enter any 3 digit number and reverse it.

		e.g.	No = 148	rev_No = 841

No 	rem	rev=0[rev=(rev*10)+rem;]
148	8	8     [0*10]+8==>8
14	4	84----[8*10]+4==>84
1	1	841---[84*10]+1==>841
*/

#include<stdio.h>
void main()
{

    int no,rev=0,rem;

    printf("Enter no:\n");
    scanf("%d",&no);

    for( ;no!=0;no=no/10 )
    {

        rem=no%10;
        rev=(rev*10)+rem;
    }
    printf("reverse :%d",rev);
}
