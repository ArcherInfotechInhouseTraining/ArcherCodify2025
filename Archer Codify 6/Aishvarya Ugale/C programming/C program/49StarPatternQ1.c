  /* WAP to print following pattern

    ******
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

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

}
