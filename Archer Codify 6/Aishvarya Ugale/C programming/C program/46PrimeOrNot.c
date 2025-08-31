// WAP TO DISPLAY THE ENTERED NUMBER IS PRIME OR NOT.
#include<stdio.h>
void main()
{
   int no,d,flg;

    printf("\n Enter the number: ");
    scanf("%d",&no);

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
    {
        printf("\n Number is Prime");
    }
    else
    {
        printf("\n Number is non-prime");
    }

}
