/*Write a C Program to Read a Matrix and Print Diagonals
This C program will read a matrix of MxN dimensions and prints only diagonal’s
elements of the matrix.
Input:
1 1 1
2 2 2
3 3 3
Output:
1
  2
    3
*/

#include<stdio.h>
void main()
{
    int arr[3][3],i,j,k;
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

    printf("Diagonal Element is :\n");


     for(i=0;i<3;i++)
    {
         for(j=0;j<i;j++)
    {
         printf(" ");
    }
     printf("%d\n",arr[i][j]);
    }

}

