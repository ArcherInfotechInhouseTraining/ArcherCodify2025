//Write a C program to print all Strong numbers between 1 to n.

#include<stdio.h>

void main()
{
    int no,rem,mul=1,sum=0,temp,i,j;

    printf("Enter Number\n");
    scanf("%d",&no);
        temp=no;
        for(i=0;i<=no;i++)
        {
            temp=i;
     sum=0;
    for(; temp!=0; temp=temp/10)
    {
        rem=temp%10;
         mul=1;

        for(j=1;rem>=j;j++)
        {
            mul=mul*j;
        }

        sum=sum+mul;

    }
    if(i == sum)
    {
        printf("%d\n",sum);
    }

}
}

