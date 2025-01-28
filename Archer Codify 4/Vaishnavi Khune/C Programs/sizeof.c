//c program to find the size of int,float,char,double

#include<stdio.h>

int main(){

int i;
float f;
char c;
double d;
long long int li;
long int l;
long double lc;
 
 printf("size of int data type is %zu bytes \n",sizeof(i));
 printf("size of float data type is %zu bytes \n",sizeof(f));
 printf("size of char data type is %zu bytes \n",sizeof(c));
 printf("size of double data type is %zu bytes \n",sizeof(d));
 printf("size of long int data type is %zu bytes \n",sizeof(l));
 printf("size of long long int data type is %zu bytes \n",sizeof(li));
 printf("size of long double data type is %zu bytes \n",sizeof(lc));


    return 0;
}