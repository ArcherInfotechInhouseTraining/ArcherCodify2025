/* Enter the number and add the alternate digit from it.

        no=28416   ==> 6+4+2 = 12
                         1+8 = 9

	no	s1	s2	rem   	flg
					0
      28416	0	0	6
		6			1
      2841			1
			1		0
      284			4
		10			1
      28			8
			9		0
      2		12			1
      0

*/


#include<stdio.h>

    void main()
    {
        int no,sum1=0,sum2=0,rem,flag=0;

        printf("Enter Number :\n");
        scanf("%d",&no);

        for( ;no!=0;no=no/10)
        {
            rem=no%10;
            if(flag==0)
            {
                sum1=sum1+rem;
                flag=1;
            }
            else
            {
                sum2=sum2+rem;
                flag=0;
            }
        }
        printf("Sum1 : %d\n",sum1);
        printf("Sum2 : %d",sum2);
    }


