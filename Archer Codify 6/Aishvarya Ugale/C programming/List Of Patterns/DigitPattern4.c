/*

      1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4


*/


#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
           printf(" ");
        }
        for(j=1;j>=1;j--)
        {
            printf("%d",j);
        }
         for(j=2;j<=i;j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }

}

