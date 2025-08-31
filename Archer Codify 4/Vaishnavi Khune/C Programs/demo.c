#include<stdio.h>
//sum function
int sum(int n){

if(n==1){
    return 1;
}
int sumN=sum(n-1)+n; //recurssion of sum()

return sumN;
}

//factorial function

int fact(int n){

    if(n==1){
        return 1;
    }

int factoN=fact(n-1)*n;//recurssion of fact()

return factoN;

}

// temp conversion function

float tempconv(float c){

float f=c*9/5+32;

return f;

}

//percentage function

float per(float sc,float m, float sa){

float p=((sc+m+sa)/300)*100;

return p;

}

//fibonacci series function

int fib(int n){

if(n==0){
    return 0;
}else if(n==1){
    return 1;
}
 
 int fibo=fib(n-2)+fib(n-1);

 return fibo;


}

int main(){

float n=8;

//printf("sum is %d",sum(n));
//printf("factorial is %d",fact(n));

//printf("temp in fahrenheit is %f",tempconv(n));
// float sc,m,sa;
// printf("enter science,math and sanskrit marks");
// scanf("%f%f%f",&sc,&m,&sa);

// printf("percentage are :%f",per(sc,m,sa));

printf("fibonacci series is :\n");

for(int i=0;i<=n;i++){

printf("%d \t",fib(i));
}
    return 0;
}