//Write a C program to check whether a number is Armstrong number or not.
//1^3 + 5^3 + 3^3 equals 153.

#include<stdio.h>
void main()
{
    int no,cnt=0,i,temp,mul=1,sum=0,rem,c;

    printf("Enter number\n");
    scanf("%d",&no);
    temp=no;
    for(i=0;no!=0;no=no/10)
    {
        cnt++;
    }
    printf("\ncnt=%d",cnt);

    no=temp;
    for(i=0;no!=0;no=no/10)
    {
        rem=no%10;
        mul=1;
        c=cnt;
    for( ;c!=0;c--)
        {
            mul=mul*rem;
        }
        sum=sum+mul;
    }
    printf("\nAddition of power %d  number %d Addition is %d",cnt,temp,sum);

    if(temp==sum)
    {
        printf("\nNumber is Armstrong!!\n");
    }
    else{
        printf("\nNumber is not armstrong!!\n");
    }


}
