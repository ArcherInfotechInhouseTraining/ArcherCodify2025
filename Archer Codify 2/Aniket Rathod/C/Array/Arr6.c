// Sorting Techniques: Selection sort


#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5],i,j,temp;
    
    printf("\n Enter 5 elements in array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\n Before Sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }
    
    //Selection Sort
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<i;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    printf("\n After Sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }

    
    return 0;
}