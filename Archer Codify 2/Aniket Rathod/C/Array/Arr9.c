// Sorting Techniques: Insertion Sort

#include<stdio.h>
#include<conio.h>

int main()
{
    int ary[10],i,j,pivot;
    
    printf("\n Enter 10 elements in array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&ary[i]);    
    }
    
    printf("\n Before Sorting: ");
    for(i=0;i<10;i++)
    {
        printf("%5d",ary[i]);
    }
    
    //Insertion Sort
    for(i=1;i<8;i++)
    {
        pivot=ary[i];
        j=i-1;
		while( j!=-1 && ary[j]>pivot)
		{
			ary[j+1]=ary[j];
			j--;
		}
		ary[j+1]=pivot;

    }
    
    printf("\n Sorted Array is: ");
    for(i=0;i<10;i++)
    {
        printf("%5d",ary[i]);
    }
     
    return 0;
}