//- Selection sort:
/*

	step - 1: input array say x having size SIZE
	step - 2: select position i, where i starts from 0;
	step - 3: select position j, where j=i+1
	step - 4: compare values at i and jth location
		  if val at ith location greater than jth location
		  then only interchange them
	step - 5: increase j by 1 and rep. step 4, till j<SIZE
	step - 6: increase i by 1 and rep. step 3, till i<SIZE-1


	Entered Array -	55	44	33	22	11

		0	1	2	3	4		i-j
		55	44	33	22	11	spos=0	0-1
		||       |
		44	55	33	22	11		0-2
				 |
		33	55	44	22	11		0-3
					|
		22	55	44	33	11		0-4
						|
		11	55	44	33	22
	-----------------------------------------------------------
		11	55	44	33	22	spos=1	1-2
			||	|
		11	44	55	33	22		1-3
					|
		11	33	55	44	22		1-4
						|
		11	22	55	44	33
	-----------------------------------------------------------
		11	22	55	44	33	spos=2	2-3
				||	|
		11	22	44	55	33		2-4
						|
		11	22	33	55	44
	------------------------------------------------------------
		11	22	33	55	44	spos=3	3-4
					||	|
		11	22	33	44	55 ==> sorted
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
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        printf("\n-----------------------------------------------\n");
		for(k=0;k<n;k++)
		{
			printf("%5d",arr[k]);
		}
    }

    printf("\nAscending Array Elements Using Selection Sort: ");
    for(i= 0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }


}
