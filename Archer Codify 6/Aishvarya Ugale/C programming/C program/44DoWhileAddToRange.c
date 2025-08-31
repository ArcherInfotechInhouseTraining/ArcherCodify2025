// WAP to add N nos according to users choice

#include<stdio.h>
void main()
{   int i,no,range,sum=0;

    i=0;
    printf("\n Enter the range ");
    scanf("%d",&range);
    do
    {

        printf("\n Enter the no ");
        scanf("%d",&no);
        sum=sum+no;
        printf("\n Sum is %d ",sum);
        i++;
    }while(i<range);

    printf("\n Sum is %d ",sum);



}
