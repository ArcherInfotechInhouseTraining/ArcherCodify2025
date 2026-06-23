
	// in above program print arrays in hori. manner


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



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s3[i][j]=0;
            for(k=0;k<3;k++)
            {
                s3[i][j]=s3[i][j]+s1[i][k]*s2[k][j];
            }
        }
    }


    printf("Display:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",s1[i][j]);
        }
        printf("\t\t");


        for(j=0;j<3;j++)
        {
            printf("%5d",s2[i][j]);
        }
        printf("\t\t");


        for(j=0;j<3;j++)
        {
            printf("%5d",s3[i][j]);
        }
        printf("\n");
    }

	}
