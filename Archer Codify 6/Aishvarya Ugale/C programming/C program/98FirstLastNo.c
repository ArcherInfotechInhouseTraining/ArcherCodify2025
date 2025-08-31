//Write a C program to find first and last digit of a number.


#include<stdio.h>
void main()
{
    int no,first,last,cnt,d;
    printf("Enter Digit :\n");
    scanf("%d",&no);

    last=no%10;

    for(cnt=0 ;no!=0; )
    {

         d=no;
         no=no/10;
        if(no==0)
        {
           printf ("First : %d\n",d);
        }

    }


     printf ("Last : %d",last);
}
