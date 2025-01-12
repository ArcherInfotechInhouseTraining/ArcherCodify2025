
    // Write as program to interchange the values of 2 variables (without using tmp)

#include<stdio.h>
 void main()
 {
int a,b;
 printf("Enter A and B\n");
     scanf("%d%d",&a,&b);

     printf("Before Swapping\n A=%d B=%d\n",a,b);

     a=a+b;
     b=a-b;
     a=a-b;

     printf("Before Swapping\n A=%d B=%d\n",a,b);
 }
