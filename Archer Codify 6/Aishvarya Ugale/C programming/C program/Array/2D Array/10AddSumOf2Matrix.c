/*Write a C Program to find sum and subtraction of two matrices
This C program will read two matrices and find their sum (addition) and subtraction, in
addition matrix addition of both matrices' elements will be assigned and in the
subtraction matrix, subtraction of both matrices' elements will be assigned.
*/
#include<stdio.h>
void main()
{
    int a1[3][3],a2[3][3],i,j;

     printf("Enter First Array Elements\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        scanf("%d",&a1[i][j]);
    }
    }

    printf(" First Array Elements is:\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        printf("%5d",a1[i][j]);
    }
    printf("\n");
    }

     printf("Enter Second Array Elements\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        scanf("%d",&a2[i][j]);
    }
    }

    printf(" Second Array Elements is:\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        printf("%5d",a2[i][j]);
    }
    printf("\n");
    }

     printf(" Addition of  Array Elements is:\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        printf("%5d",(a1[i][j]+a2[i][j]));
    }
    printf("\n");
    }

     printf(" Substraction of  Array Elements is:\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        printf("%5d",(a1[i][j]- a2[i][j]));
    }
    printf("\n");
    }
}
