/* Enter any 3 digit number and reverse it.

		e.g.	No = 148	rev_No = 841

No 	rem	rev=0[rev=(rev*10)+rem;]
148	8	8     [0*10]+8==>8
14	4	84----[8*10]+4==>84
1	1	841---[84*10]+1==>841

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,rem,rev;
    
    printf("\n Enter a 3 digit no: ");
    scanf("%d",&num);
    
    for(rev=0;num!=0;num=num/10)
    {
        rem=num%10;
        rev=(rev*10)+rem;
    }
    
    printf("\n Reverse numbers are: %d",rev);
    
    return 0;
}