/*Write a C Program to find multiplication of two matrices
This C program will read two matrices and make a third matrix, which will contain the
multiplication of both input matrices.
*/

#include<stdio.h>
void main()
{

    int a1[3][3],a2[3][3],m[3][3],i,j,k;

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

    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        m[i][j]=0;
    }
    }

    printf("Multiplication of Array is :\n");
     for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        for(j=0;j<3;j++)
    {

        m[i][j]=m[i][j]+a1[i][k]*a2[k][j];
    }
    }
    }

    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
         printf("%5d",m[i][j]);
    }
    printf("\n");
    }


}
