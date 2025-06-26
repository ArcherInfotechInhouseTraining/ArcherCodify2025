
//	- Bubble sort
/*Entered Array -	55	44	33	22	11

		0	1	2	3	4
		55	44	33	22	11
	0-1	|        |
		44	55	33	22	11
	1-2		|	|			i=0
		44	33	55	22	11
	2-3			|	|
		44	33	22	55	11
	3-4				|	|
		44	33	22	11	55
	-----------------------------------------------
		44	33	22	11	55
	0-1	|	|
		33	44	22	11	55
	1-2		|	|			i=1
		33	22	44	11	55
	2-3			|	|
		33	22	11	44	55
	----------------------------------------------
		33	22	11	44	55
	0-1	|	|
		22	33	11	44	55	i=2
	1-2		|	|
		22	11	33	44	55
	----------------------------------------------
		22	11	33	44	55
	0-1	|	|				i=3
		11	22	33	44	55	===> sorted

		*/

#include<stdio.h>
#define n 5
void main()
{

    int arr[n],i,temp,j,k;

    printf("Enter %d Array Elements to sort:",n);

    for(i= 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array Elements : ");
    for(i= 0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }


    for(i=0;i<n-1;i++)
    {

    for(j=0;j<n-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
 printf("\nAscending Array Elements Using Selection Sort: ");
    for(i= 0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}











