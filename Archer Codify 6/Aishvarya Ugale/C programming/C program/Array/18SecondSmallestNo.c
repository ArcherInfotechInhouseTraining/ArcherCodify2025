// Write a program to find the 2nd smallest element in the array

#include<stdio.h>
void main()
{
    int arr[5],i,fsmall,ssmall;
    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("element is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    fsmall=arr[0];
    ssmall=arr[4];

    for(i=1;i<5;i++)
    {
        if(arr[i]<fsmall)
        {
            fsmall=arr[i];
        }


    }

    for(i=4;i>=0;i--)
    {
        if(fsmall<arr[i] && arr[i]<ssmall)
        {
            ssmall=arr[i];
        }
    }

    printf("First small Number is %d:\n",fsmall);
    printf("Second small Number is %d:\n",ssmall);
}

