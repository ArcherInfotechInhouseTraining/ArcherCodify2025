#include<stdio.h>

int main(){

int a,b;

printf("enter two numbers:");
scanf("%d %d",&a ,&b);

printf("division of %d and %d is %d",a,b,a/b);
printf("\n Remainder of %d/%d is %d",a,b,a%b);

    return 0;
}