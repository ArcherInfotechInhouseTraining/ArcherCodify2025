//Enter any 10 no and copy all nos in another array in ascending order.

#include<stdio.h>
void main()
{
    int arr[10],x[10],i,j,temp;

    printf("Enter 10 Elements :\n");
    for(i=0;i<10;i++)
    {

    scanf("%d",&arr[i]);
    }
     printf("Array Elements :\n");
    for(i=0;i<10;i++)
    {

    printf("%d\n",arr[i]);
    }

    for(i=0;i<10;i++)
    {

        x[i]=arr[i];
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j+1];
                x[j+1]=x[j];
                x[j]=temp;
            }
        }
    }

    printf("Ascending Order is:\n");
    for(i=0;i<10;i++)
    {
        printf("%5d",x[i]);
    }


}

/*
#include<stdio.h>
void main()
{
    int arr[10],x[10],i,j,temp;

    printf("Enter 10 Elements :\n");
    for(i=0;i<10;i++)
    {

    scanf("%d",&arr[i]);
    }
     printf("Array Elements :\n");
    for(i=0;i<10;i++)
    {

    printf("%d\n",arr[i]);
    }
        printf("Ascending Order is:\n");

     x[0]=arr[0];
    for(i=0;i<10;i++)
    {

        for(j=i+1;j<=10;j++)
        {
            if(x[i]<arr[j])
            {
                temp=x[i];
              x[i]=arr[j];
              arr[j]=x[i];
            }
        }
        printf("%5d",x[i]);
    }




}
*/
