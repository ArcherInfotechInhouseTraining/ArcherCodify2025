#include<stdio.h>

int main()
{
    int no, temp, d,rem;
    int max = 0;

    printf("\n Enter a Number :");  // 8926
    scanf("%d",&no);

    temp=no;

    for(d=9; d>0; d--)
    {
        for(no=temp; no!=0; no=no/10)
        {
            rem=no%10;
            if(rem==d)
            {
                max=(max*10)+rem;  //9826
            }
        }
    }

    printf("\n Maximum no occur from %d is %d",temp,max);
}