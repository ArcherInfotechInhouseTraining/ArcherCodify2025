// Enter any 10 nos and count even and odd nos from it.

#include<stdio.h>
void main()
{
    int arr[10];
    int i,ecnt=0,ocnt=0;

    printf("Enter 10 Elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Elements is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
     for(i=0;i<10;i++)
    {
      if(arr[i]%2==0)
      {
          ecnt++;
      }
      else
      {
          ocnt++;
      }
    }

    printf("Even Count is:%d\n",ecnt);
     printf("Odd Count is:%d\n",ocnt);

}
