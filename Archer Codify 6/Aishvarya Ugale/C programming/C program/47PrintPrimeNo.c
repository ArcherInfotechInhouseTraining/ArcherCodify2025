// WAP TO DISPLAY THE the list of prime numbers from 10 to 100
#include<stdio.h>

void main()
{
    int no,d,flg;

    no=10;
    printf("\n List Of Prime Numbers: ");
    while(no<=100)
    {
        d=2;
        flg=0;
        do
        {
            if(no%d==0)
            {
                flg=1;
                break;
            }
            d++;
        }while(d<=(no/2));

        if(flg==0)
            printf("%5d",no);

        no++;
    }
}

