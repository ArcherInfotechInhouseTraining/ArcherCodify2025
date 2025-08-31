//Enter 12 no through keyboard and find the exact position where min no is present

#include<stdio.h>
void main()
{
    int arr[12],i,min;

    printf("Enter 12 Array Elements:\n");
    for(i=0;i<12;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" Array Elements:\n");
    for(i=0;i<12;i++)
    {
        printf("%d\n",arr[i]);
    }
    min=arr[0];
     for(i=1;i<12;i++)
    {

    if(arr[i]<min)
    {
        min=arr[i];
    }
    }
    printf("Minimum Value is :%d\n",min);

}
