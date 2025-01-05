// Enter two arrays of 3x3 and find the addition of two matrix
#include<stdio.h>

void main()
{
    int s1[3][3],s2[3][3],s3[3][3],j,i;

    printf("Enter First Array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&s1[i][j]);
        }
    }


     printf("Enter Second Array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&s2[i][j]);
        }
    }

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s3[i][j]=s1[i][j]+s2[i][j];
        }
    }

    printf("First Array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",s1[i][j]);
        }
        printf("\n");
    }


    printf("Second Array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",s2[i][j]);
        }
        printf("\n");
    }




     printf("Addition of Array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",s3[i][j]);
        }
        printf("\n");
    }

}
