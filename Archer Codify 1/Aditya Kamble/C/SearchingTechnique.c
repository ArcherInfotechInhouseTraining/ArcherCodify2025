#include<stdio.h>

/*
// - Linear Search: Operated on any Array:


#define SIZE 10
int main()
{
    int x[SIZE],i,no,flg=0;

    printf("\n Enter the %d no: ",SIZE);
    for(i=0; i<SIZE; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Enter an Number To be Searched:");
    scanf("%d",&no);
    for(i=0; i<SIZE; i++)
    {
        if(x[i]==no)
        {
            flg=1;
            break;
        }
    }
    if(flg==1)
    {  
		printf("\n %d is present in an Array",no);
    }
    else
    {
        printf("\n %d is present at %d position",no,i);
    }
    return 0;
}

*/

// - Binary Search: Operated on sorted Array:

#define SIZE 10
int main()
{
    int x[SIZE];
    int i,end,start,mid,no,flg=0;

    printf("\n Enter the %d nos in ascending order: ",SIZE);
    for(i=0; i<SIZE; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Enter the Number To Be Searched: ");
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
        else if(no>x[mid])
        {
            start=mid+1;
        }
        else if(no<x[mid])
        {
            end=mid-1;
        }
    } while (start<=end);
    if(flg==1)
    {
        printf("%d is present at %d position",no,mid);
    }
    else
    {
        printf("%d is not present at in array",no);
    }
    
    return 0;

}