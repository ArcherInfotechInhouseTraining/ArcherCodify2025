#include<stdio.h>

int maxNo(int *a,int *b){

if(*a>*b){
    return *a;
}else
return *b;

}

int main(){

 int a=4;
 int b=9;
int *x=a;
int *y=b;

printf("maximum no is:%d",maxNo(a,b));

    return 0;
}