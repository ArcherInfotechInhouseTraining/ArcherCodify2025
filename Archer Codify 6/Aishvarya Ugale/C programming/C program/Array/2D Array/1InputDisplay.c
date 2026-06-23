// Input array of 4x3 and display it.

#include<stdio.h>

void main()
{
    int arr[4][3];
    int i,j;

    printf("Enter matrix\n");

    for(i=0;i<4;i++)//Rows
    {
        for(j=0;j<3;j++)//Columns
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Display matrix\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
