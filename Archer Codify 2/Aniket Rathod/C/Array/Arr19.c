//	2D Array - Numeric

#include<stdio.h>

int main()
{
    int ary[3][3]={{22,21,44},{44,21,54},{43,5,511}};
    int p,q;

    printf("\n  2D Array is: \n");

    for(p=0;p<3;p++)    // outer loop - rows

    {
        for(q=0;q<3;q++)    //inner loop - cols

        {
                printf("\t %d",ary[p][q]);
        }
        printf("\n");
    }

    return 0;

}