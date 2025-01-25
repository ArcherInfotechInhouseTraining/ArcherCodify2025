// Enter two arrays of 3x3 and find the multi. of two matrix


#include<stdio.h>
void main()
{

    int s1[3][3],s2[3][3],s3[3][3],i,j,k;


    printf("Enter 1st array\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&s1[i][j]);
        }
    }


     printf("Enter 2nd array\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&s2[i][j]);
        }
    }


    for(i=0;i<3;i++)// Row
    {

            for(j=0;j<3;j++)//Column
            {
                 s3[i][j]=0;

                 for(k=0;k<3;k++)//next iterationRow Column
                {
                s3[i][j]=s3[i][j]+(s1[i][k]*s2[k][j]);
                }
            }

    }

    printf(" 1st array:\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",s1[i][j]);
        }
         printf("\n");
    }

    printf(" 2nd array:\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",s2[i][j]);
        }
         printf("\n");
    }
    printf("Multiplication Array:\n");
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
            {



                printf("%d\t",s3[i][j]);


            }
            printf("\n");
    }
}
