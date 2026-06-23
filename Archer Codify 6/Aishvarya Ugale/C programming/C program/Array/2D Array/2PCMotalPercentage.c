// WAP using 2D array to store the PCM  marks of 3 students and display marks with
	// total and percentage.

	#include<stdio.h>
	void main()
	{
	    int arr[3][4],i,j,p,c,m,tot;

	    for(i=0;i<3;i++)
        {
            tot=0;
            printf("student:%d\n",i+1);
            for(j=0;j<3;j++)
            {
                printf("Enter sub %d marks:\n",j+1);
                scanf("%d",&arr[i][j]);

                tot=tot+arr[i][j];
            }
            arr[i][j]=tot;
        }
          printf("Student Details\n");
         for(i=0;i<3;i++)
        {
            printf("\nstudent:%d",i+1);
            for(j=0;j<3;j++)
            {

                printf("%5d",arr[i][j]);

            }
              printf("\tTotal:%d\t",arr[i][j]);
              printf("Percentage:%0.2f",(arr[i][j]/3.0));

        }






	}
