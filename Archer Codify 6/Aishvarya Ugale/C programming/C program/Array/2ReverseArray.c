// WAP to input array of 10 nos and display it as it is and in reverse manner
#include<stdio.h>
void main()
{
    int arr[10];
    int i;

    printf("Enter 10 Array Elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf(" Array Elements is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
     printf("Reverse Array Elements is:\n");
     for(i=9;i>=0;i--)
     {
          printf("%d\n",arr[i]);
     }
      printf("Reverse Array Elements in other method is:\n");
       for(i=0;i<10;i++)
    {
        printf("%d\n",arr[9-i]);
    }
}
