//c program to swap to number

#include<stdio.h>

int main(){

int a , b;

printf("enter number a=");
scanf("%d",&a);
printf("enter number b=");
scanf("%d",&b);

printf("a=%d \n b=%d\n",a,b);

int temp;
temp=a;
a=b;
b=temp;

printf("After Swapping :\n a=%d \n b=%d",a,b);

    return 0;
}