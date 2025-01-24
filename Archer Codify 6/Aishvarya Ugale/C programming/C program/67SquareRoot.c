//Write a C program to enter any number and calculate its square root
#include<stdio.h>
void main()
{
    /*
    int num,cnt,odd;

    printf("Enter Number :\n");
    scanf("%d",&num);
    odd=1;
    cnt=0;
    while(num!=0)
    {

    num=num-odd;
    odd=odd+2;
    cnt++;
    }



    printf("Square Root :%d",cnt);
    */
    int no,i;
    printf("Enter Number :\n");
    scanf("%d",&no);
    for(i=0;i<=no/2;i++)
    {
        if(no==i*i)
        {
            printf("%d",i);
            break;
        }
    }
}
