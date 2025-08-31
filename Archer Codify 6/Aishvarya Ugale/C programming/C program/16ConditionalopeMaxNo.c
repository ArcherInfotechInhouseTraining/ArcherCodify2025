// WAP to find max bet 2 nos using conditional operator

#include<stdio.h>
void main()
{

    int no1,no2,max;
    printf("Enter no1 and no2\n");
    scanf("%d%d",&no1,&no2);


     (no1>no2) ? printf("\n no1: %d is max\n",no1) : printf("\n no2: %d is max\n",no2) ;

    max=(no1>no2)? no1 : no2;
    printf("Max :%d",max);
}
