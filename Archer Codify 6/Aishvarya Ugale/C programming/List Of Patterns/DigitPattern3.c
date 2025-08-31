/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
           printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

}
