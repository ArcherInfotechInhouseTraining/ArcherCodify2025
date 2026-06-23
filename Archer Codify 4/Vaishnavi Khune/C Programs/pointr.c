#include<stdio.h>

int main(){

// int age=22;

// int *ptr=&age;

// printf("%p\n",ptr);

int x;
int *ptr;

ptr=&x;
*ptr=0;

printf("x= %d\n",x);
printf("*ptr =%d\n",*ptr);

*ptr += 5;

printf("x= %d\n",x);
printf("*ptr =%d\n",*ptr);

(*ptr)++;

printf("x= %d\n",x);
printf("*ptr =%d\n",*ptr);


    return 0;
}