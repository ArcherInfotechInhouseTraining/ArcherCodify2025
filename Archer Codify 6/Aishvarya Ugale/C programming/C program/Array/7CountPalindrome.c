//Enter any 5 no to keyboard and count no of palindromes


#include<stdio.h>
void main()
{
    int arr[5],i,rev=0,temp=0;
    printf("Enter 10 elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("element is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }

    for(i=0;i<5;i++)
    {
        temp=arr[i];
        rev=0;
        while(arr[i]!=0)
        {
            rev=(rev*10)+(arr[i]%10);
            arr[i]=arr[i]/10;
        }
        if(temp==rev)
        {
            printf("The %d variable is palindrome in %d Location \n",temp,i);
        }
    }
}
