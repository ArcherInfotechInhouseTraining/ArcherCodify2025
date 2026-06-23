// Enter any 3 digit number and display the addition of all 3 digits.

       /*    e.g. 148 -> 8+4+1 ==> 13

		no	rem    sum
				0
		148	8	8
		14	4	12
		1	1	13
		0
*/


#include<stdio.h>
void main()
{

    int no,rem,sum=0;

    printf("Enter three digit number\n");
    scanf("%d",&no);

    for( ;no!=0; no=no/10)
    {
        rem=no%10;
        sum=sum+rem;

    }
    printf("Sum:%d",sum);
}
