//- Write a program to find the sum of N numbers in an array


#include<stdio.h>
void main()
{

    int arr[50],i,no,sum=0;

    printf("Enter how many elements u want\n");
    scanf("%d",&no);

    printf("Enter %d Elements:\n",no);
    for(i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<no;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum= %d",sum);

}
