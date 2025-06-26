// Multiplication From 2 To 10
#include<stdio.h>

int main()
{
    int n,m;
    m=1;
  do
  {
    n=2;
    do
    {
     
        printf("%5d",n*m); // (2 3 4 5 6 7 8 9 10) * m
        n++;
    } while(n<=10);
        printf("\n");    
  } while(++m<=10);
    return 0;
}