
	// - Binary Search: operated on sorted Array

	#include<stdio.h>
	#define size 5
	void main()
	{
	    int arr[size],i,flg=0,mid,start,end,no;


    printf("Enter %d array Elements\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Search no\n");
    scanf("%d",&no);

    start=0;
    end=size-1;

    do
    {
        mid=(start+end)/2;
        if(arr[mid]==no)
        {
            flg=1;
            break;
        }
       else if(no<arr[mid])
        {
            end=mid-1;
        }
        else if(no>arr[mid])
        {
            start=mid+1;
        }

    }while(start<=end);

    if(flg==0)
    {
         printf("The %d is not present",no);
    }
    else{
         printf("The %d is  present in %d Location",no,mid);
    }
	}
