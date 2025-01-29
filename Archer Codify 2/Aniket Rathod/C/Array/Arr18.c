// Searching Techniques
// Binary Search: operated on sorted Array

/*      0	1	2	3	4	5	6	7	8	9
		12	23	45	56	78	89	92	99	112	145
		|									|
		start								end

		
		mid=(start+end)/2 ==>	mid=(0+9)/2 ==> 4

		if no is present at mid position	--> print it is present and stop
		
		if not ---------- check no<x[mid] --> if yes then end=mid-1
			  |
			  |------ check no>x[mid] --> if yes then start=mid+1
*/

#include<stdio.h>
#define SIZE 10
int main()
{
	int x[SIZE],i,no,flg=0,start,end,mid;

	printf("\n Enter the %d nos in ascending order: ",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\n Enter the number to be searched: ");
	scanf("%d",&no);

	start=0;
	end=SIZE-1;
	do
	{
		mid=(start+end)/2;
		if(x[mid]==no)
		{
			flg=1;
			break;
		}
		else if(no<x[mid])
		{
			end=mid-1;
		}
		else if(no>x[mid])
		{
			start=mid+1;
		}
	}while(start<=end);
	if(flg==1)
	{
		printf("%d is present at %d position",no,mid);
	}
	else
	{
		printf("%d is not present in an array",no);
	}
	return 0;
}