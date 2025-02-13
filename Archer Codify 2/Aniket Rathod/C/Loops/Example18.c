/* Enter any 3 digit number and display the addition of all 3 digits.

            e.g. 148 -> 8+4+1 ==> 13

		no	rem    sum
				0
		148	8	8
		14	4	12
		1	1	13
		0
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,rem,sum=0;
    
    printf("\n Enter a 3 digits no: ");
    scanf("%d",&num);
    
    for(;num!=0;)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    
    printf("\n Sum of the nos is: %d",sum);
    
    return 0;
    
}