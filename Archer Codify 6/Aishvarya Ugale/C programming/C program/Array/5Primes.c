// Enter any 10 nos and display list of primes from it.

#include<stdio.h>
void main()
{
    int arr[10],i;
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
       printf("Prime Number is:\n");
    for(i=0;i<10;i++)
    {
         int d=2;
         int flag=0;


        while(d<=(arr[i]/2))
        {

            if(arr[i]%d==0)
            {
                flag=1;
             break;
            }


            d++;
        }
        if(arr[i]!=1)
        {


        if(flag==0)
            {
                printf("%d\n",arr[i]);
            }
         }
    }
}

