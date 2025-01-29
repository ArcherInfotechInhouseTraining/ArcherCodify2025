/*Hollow Square Star Pattern with
Diagonal
* * * * *
* *   * *
*   *   *
* *   * *
* * * * *

*/


#include<stdio.h>
void main()
{
    int i,j;

for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if(i==0||i==4||j==0||j==4||i==j)
        {
            printf("*");
        }
        else if(i==1&&j==3||i==3&&j==1)
        {
            printf("*");
        }
        else{
            printf(" ");
        }

    }
     printf("\n");
}
}
