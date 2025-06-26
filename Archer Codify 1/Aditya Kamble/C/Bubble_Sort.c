#include<stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE];
    int i,j;
    int tmp;

    printf("\n Enter any 5 no:");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<(4-i); j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    printf("\n After Sort: ");
    for(i=0; i<5; i++)
    {
        printf("%5d",arr[i]);
    }

    return 0;

}