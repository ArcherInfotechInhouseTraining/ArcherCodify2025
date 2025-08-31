/*Write a C Program to Read and Print a RxC Matrix, R and C must be input by the
User
This program will read a two dimensional array (Matrix), number of rows (R) and
number of columns (C) will be read through the User.
Input : Enter number of Rows :3
Enter number of Cols :3
Output:Matrix is :
1 1 1
2 2 2
3 3 3
*/

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

    printf("Array Elements is :\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
}
