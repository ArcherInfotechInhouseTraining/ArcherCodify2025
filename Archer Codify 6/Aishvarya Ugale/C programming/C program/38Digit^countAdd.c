/* WAP to count the digits in a number, and add every, digit ^ Count

    suppose,    no=123

                    = (1^3) + (2^3) + (3^3)
                    = 1 + 8 +27
                    = 36
*/

#include<stdio.h>
void main()
{
    int no,cnt=0,sum=0,rem,temp,mul;

    printf("Enter number:\n");
    scanf("%d",&no);
     temp=no;
    while(no!=0)
    {
        cnt++;
        no=no/10;
    }
    printf("count :%d\n",cnt);
    no=temp;
    while(no!=0)
    {
        rem=no%10;
        no=no/10;
         int i=0;
         mul=1;
        while(cnt>i)
        {
            mul=mul*rem;
            i++;

        }

         sum=sum+mul;


    }

 printf("Addition : %d",sum);

}
