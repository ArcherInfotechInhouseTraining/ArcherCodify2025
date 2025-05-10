/*Write a C Program to Read a Matrix and find Sum and Product of all elements
This program will read a matrix and prints sum and product of all elements of the two
dimensional array.
Input : Enter number of Rows :3
Enter number of Cols :3
Output:Matrix is :
1 1 1
2 2 2
3 3 3
Sum :18
Product: 216
*/

#include<stdio.h>
void main()
{
    int arr[3][3],i,j,sum=0,mul=1;
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


    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        sum=sum+arr[i][j];
    }
    }


    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
    {
        mul=mul*arr[i][j];
    }
    }
     printf(" Sum of Array Elements is: %d\n",sum);
      printf(" Product of Array Elements is:%d\n",mul);

}

