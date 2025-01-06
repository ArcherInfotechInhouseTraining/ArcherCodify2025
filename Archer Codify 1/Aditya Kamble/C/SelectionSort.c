#include<stdio.h>
#define SIZE 5
int main()
{
    int x[SIZE];
    int i ;
    int j,tmp;

    for(i=0; i<SIZE; i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0; i<SIZE; i++) // spos
    {
        for(j=i+1; j<4; j++)
        {
            if(x[i]>x[j])
            {
                tmp = x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
    printf("\n Sorted Array is :");

    for(i=0; i<SIZE; i++)
    {
        printf("%5d",x[i]);
    }

    return 0;
}