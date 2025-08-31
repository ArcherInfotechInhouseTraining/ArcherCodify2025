//  Static Storage Class in C

#include <stdio.h>
#include <stdlib.h>

void incr()
{
    static int i;		// see the output with and without static
    printf("\n i=%d",i);
    i++;
}
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        incr();
    }
    return 0;
}
