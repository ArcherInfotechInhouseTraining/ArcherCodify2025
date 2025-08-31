// Input array of 4x3 and display it.

#include<stdio.h>

int main()
{
    int ary[4][3];
    int a,b;

    printf("\n Enter an Array for 4x3 elements: ");
    for(a=0;a<4;a++)
    {
        for(b=0;b<3;b++)
        {
            scanf("%d",&ary[a][b]);
        }
    }

    printf("\n Array elements are: \n");
    for(a=0;a<4;a++)
    {
        for(b=0;b<3;b++)
        {
            printf("\t %d",ary[a][b]);
        }
        printf("\n");
    }

    return 0;
}