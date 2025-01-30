
    /* WAP to print

    1
    12
    123
    1234
    12345
    123456

*/


#include<stdio.h>
void main()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }

}
