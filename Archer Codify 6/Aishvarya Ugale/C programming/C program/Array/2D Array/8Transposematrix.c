/*Write a C Program to Transpose a Matrix
This C program will read a matrix and print its transpose matrix.*/
#include<stdio.h>
void main()
{
    int arr[3][3],i,j;
    printf("Enter Array Elements\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    }

    printf(" Array Elements is:\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        printf("%5d",arr[i][j]);
    }
    printf("\n");

}



    printf(" Transpose Array Elements is:\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        printf("%5d",arr[j][i]);
    }
    printf("\n");

}    }
