//Initialized array of 8no and count divisible by  3&5both.


#include<stdio.h>
void main()
{
    int arr[8],i,cnt=0;
    printf("Enter 8 elements:\n");
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("element is:\n");
    for(i=0;i<8;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<8;i++)
    {
      if(arr[i]%3==0 && arr[i]%5==0)
      {
        cnt++;

      }
    }

    printf("Count is : %d",cnt);
}
