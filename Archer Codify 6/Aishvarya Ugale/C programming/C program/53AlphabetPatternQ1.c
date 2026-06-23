 /* WAP to print following pattern

    ABCDEF
     ABCDE
      ABCD
       ABC
        AB
         A
*/

#include<stdio.h>
void main()
{
    int i,j;
    int a;
    for(i=0;i<6;i++)
    {
        a=65;
        for(j=0;j<6;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("%c",a);
                a++;
            }
        }
        printf("\n");
    }

}

