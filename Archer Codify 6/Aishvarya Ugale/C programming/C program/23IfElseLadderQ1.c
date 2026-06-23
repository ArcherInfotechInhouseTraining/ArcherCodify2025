// Enter 3 nos and display the max from it.
#include<stdio.h>
void main()
{

    int n1,n2,n3;

    printf("Enter 1st no:\n");
    scanf("%d",&n1);
     printf("Enter 2nd no:\n");
      scanf("%d",&n2);
      printf("Enter 3rd no:\n");
       scanf("%d",&n3);

       if(n1>n2)
       {
           if(n1>n3)
           {
               printf("1St number is max :%d",n1);
           }
           else
            {
             printf("3rd number is max : %d",n3);
           }
       }
       else if(n2>n3)
       {
           printf("2nd is max : %d",n2);
       }
       else
       {
           printf("3rd number is max : %d",n3);

       }
}
