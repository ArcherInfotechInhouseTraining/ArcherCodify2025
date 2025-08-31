#include<stdio.h>
#define SIZE 5
int main()
{
    int i,j,tmp;
    int arr_1[SIZE];
    int arr_2[SIZE];

    printf("\n Array Of Element is: ");

    for(i=0; i<SIZE; i++)
    {
        scanf("%d",&arr_1[i]);
        arr_2[i]=arr_1[i];
    }
    
    
    for(i=0; i<SIZE; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr_2[i]>arr_2[j])
            {
                tmp = arr_2[i];
                arr_2[i] = arr_2[j];
                arr_2[j] = tmp;
            }
        }
    }

    printf("\n After Sorting Elementd our Copied array is :");

    for(i=0; i<5; i++)
    {
        printf("%6d",arr_2[i]);
    }

    return 0;
}
