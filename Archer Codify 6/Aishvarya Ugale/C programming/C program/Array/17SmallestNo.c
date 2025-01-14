//Write a program to find the smallest element in the array

#include<stdio.h>
void main()
{

    int arr[50],i,no,min,tmp;

    printf("Enter how many elements u want\n");
    scanf("%d",&no);

    printf("Enter %d Elements:\n",no);
    for(i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<no;i++)
    {
        if(arr[i]<min)
        {
            tmp=min;
            min=arr[i];
            arr[i]=tmp;
        }
    }

    printf("Smallest Number is : %d",min);
}
