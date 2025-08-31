// Sorting Techniques: Bubble Sort

#include<stdio.h>
#include<conio.h>

int main()
{
    int ary[5],i,j,temp;
    
    printf("\n Enter 5 elements in array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ary[i]);    
    }
    
    printf("\n Before Sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%5d",ary[i]);
    }
    
    //Bubble Sort
    for(i=0;i<4;i++)
    {
        for(j=0;j<(4-i);j++)
        {
            if(ary[i]>ary[j])
            {
                temp=ary[i];
                ary[i]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }
    
    printf("\n Sorted Array is: ");
    for(i=0;i<5;i++)
    {
        printf("%5d",ary[i]);
    }
     
    return 0;
}