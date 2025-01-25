
#include<stdio.h>
/*

// Display the 2d Array:


int main()
{
    int x[3][3]={{11,22,33},{44,55,66},{77,88,99}};
    int i,j;
    printf("\n Array is \n ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n ");
    }

    return 0;
}




// Input array of 4x3 and display it.

int main()
{
    int x[4][3];
    int i,j;

    printf("\n Enter the array of 4*3: \n ");
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n array of 4*3: \n "); 
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n ");
    }

    return 0;
}


// WAP using 2D array to store the PCM  marks of 3 students and display marks with
// total and percentage.


int main()
{
    int marks[3][4],i,j,tot;
    printf("\n Enter the marks obtained By Students in PCM: ");
    for(i=0; i<3; i++ )
    {
        tot=0;
        printf("\n Student %d: ",i+1);
        for(j=0; j<3; j++)
        {
            printf("\n Subject %d ",j+1);
            scanf("%d",&marks[i][j]);
            tot=tot+marks[i][j];
        }
        marks[i][j]=tot;
    }
    printf("\n Student Details \n");
    for(i=0; i<3; i++)
    {
        printf("\n Student %d:",i+1);
        for(j=0; j<3; j++)
        {
            printf("%5d",marks[i][j]);
        }
        printf("\t PCM Total: %d \t Percentage: %0.2f",marks[i][j],marks[i][j]/3.0);
    }
    return 0;
}



// Enter two arrays of 3x3 and find the addition of two matrix

int main()
{
    int x[3][3],y[3][3],z[3][3];
    int i,j;

    printf("\n Enter the First Matrix of 3*3: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Enter the Second Matrix of 3*3: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    printf("\n Adition of First Two Matrix: \n ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            z[i][j]=x[i][j]+y[i][j];
            printf("%5d",z[i][j]);
        }
        printf("\n ");
    }

    return 0;

}

*/

// Enter two arrays of 3x3 and find the multi. of two matrix

int main()
{
    int x[3][3],y[3][3],z[3][3];

    int i,j,k;

    printf("\n Enter a First Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    
    printf("\n Enter a Second Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
       
    }


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            z[i][j]=0;
            for(k=0; k<3; k++)
            {
                z[i][j] += x[i][k]*y[k][j];
            }
        }
    }


    printf("\n Multiplication Of First Two Matrix Is: \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5d",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}