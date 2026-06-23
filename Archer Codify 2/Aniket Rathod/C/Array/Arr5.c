// Enter any 10 nos and count even and odd nos from it.

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10], i, ecout=0, ocout=0;
    
    printf("\n Enter Elements for array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    if(arr[i]%2==0)
    {
        ecout++;
    }
    else
    {
        ocout++;
    }

    printf("\n Elements are: ");
	for(i=0;i<10;i++)
	{
		printf("%8d",arr[i]);
	}
	printf("\n Even Count is: %d and Odd count is: %d",ecout,ocout);
	return 0;

    
    
}