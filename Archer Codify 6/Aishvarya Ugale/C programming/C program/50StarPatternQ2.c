 /* WAP to print

                *
                **
                ***
                ****
                *****
                ******
                *******
    */


#include<stdio.h>
    void main()
{
    int i,j;

    for(i=0;i<7;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
