// Enter any 10 nos and copy all nos in another array in ascending order.
// Sorting Techniques: Selection sort

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5],ary[5],i,j,temp;
    
    printf("\n Enter 5 elements in array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);    
        arr[5]=ary[5];
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
            if(ary[i]>ary[j])
            {
                temp=ary[i];
                ary[i]=ary[j];
                ary[j]=temp;
            }
        }
    }
    
    printf("\n copy of sorted array: ");
    for(i=0;i<5;i++)
    {
        printf("%5d",ary[i]);
    }
     
    return 0;
}