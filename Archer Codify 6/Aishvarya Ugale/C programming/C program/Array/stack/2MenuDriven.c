// Detailed menu driven program of array/static impl. of stack
#define SIZE 10
#include<stdio.h>
void main()
{
   int arr[SIZE];
    int top,opt;

   top=-1;

    while(1)
    {
    printf("\n------MENU--------\n");
    printf("\n1.Push\n2.Pop\n3.stop");
    printf("\nEnter Choice:\n");
    scanf("%d",&opt);


        switch(opt)
        {
        case 1:
            if((SIZE-1)>top)
            {

            printf("Enter the number:\n");
            top++;
            scanf("%d",&arr[top]);
            }
            else
            {
                printf("Stack is full!!");
            }
            break;
        case 2:
            if(top!= -1)
            {
                top--;
                printf("After pop operation : %d ",arr[top]);
            }
            else
            {
                printf("Stack is Empty!!");
            }
            break;

        case 3:
            exit(0);
             break;
        default:
             printf("Incorrect Option!!!");


    }
    }
}
