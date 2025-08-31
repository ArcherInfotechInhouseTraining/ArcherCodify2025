//- linear Search: operated on any array

#include<stdio.h>
#define size 5

void main()
{
    int arr[size],i,no,flg=0;

    printf("Enter %d array Elements\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Search no\n");
    scanf("%d",&no);

     for(i=0;i<size;i++)
    {
        if(arr[i]==no)
        {
            flg=1;

            break;
        }
    }

    if(flg==0)
    {
         printf("The %d is not present",no);
    }
    else{
         printf("The %d is  present in %d Location",no,i);
    }
}
