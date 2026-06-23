//Write a C program to find maximum between three numbers using conditional
//operator.
#include<stdio.h>

void main()
{

    int n1,n2,n3;

    printf("Enter three no:\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    (n1>n2)? (n1>n3)?printf("Max:%d",n1):printf("Max:%d",n3)  :  (n2>n3)?printf("Max:%d",n2) : printf("Max :%d",n3);
}
