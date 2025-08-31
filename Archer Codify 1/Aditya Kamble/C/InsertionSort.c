#include<stdio.h>
#define SIZE 8
int main()
{
    int arr[SIZE];
    int i,j;
    int pivot;


    printf("\n Entered Array: ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }



    for(i=0; i<SIZE; i++)
    {
        int pivot=arr[i];
        j=i-1;
       while(j!=-1 && arr[j]>pivot)
       {
            arr[j+1]=arr[j];
            j--;
       }
       arr[j+1]=pivot;
    }

    printf("\n After Sort: ");
    for(i=0; i<SIZE; i++)
    {
        printf("%5d",arr[i]);
    }

    return 0;

}