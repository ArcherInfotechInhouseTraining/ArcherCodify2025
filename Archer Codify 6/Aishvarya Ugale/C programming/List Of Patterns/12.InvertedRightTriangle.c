/*Inverted Right Triangle Star
*****
****
***
**
*
*/


#include<stdio.h>
void main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=5;i<j;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
