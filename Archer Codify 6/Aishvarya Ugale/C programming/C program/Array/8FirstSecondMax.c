//Enter 10 Numbers through keyboard and find first and second max;

#include<stdio.h>
void main()
{
    int arr[10],i,fmax,smax;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("element is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    fmax=arr[0];
    smax=arr[0];

    for(i=1;i<10;i++)
    {
        if(arr[i]>fmax)
        {
            fmax=arr[i];
        }


    }

    for(i=1;i<10;i++)
    {
        if(fmax>arr[i] && arr[i]>smax)
        {
            smax=arr[i];
        }
    }

    printf("First Max Number is %d:\n",fmax);
    printf("Second Max Number is %d:\n",smax);
}

