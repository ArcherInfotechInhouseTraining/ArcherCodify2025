// casting example

    // to get the correct ans, we should convert any one or both N/D to float
    // only at the time of calculation and which is done by type casting as shown
#include<stdio.h>
void main()
{
    int x=13,y=5;
    float z;

    z=x/y;
    printf("\n z is %f",z);

    z=(float)x/y;
    printf("\n z is %f",z);

    z=x/(float)y;
    printf("\n z is %f",z);

    z=(float)x/(float)y;
    printf("\n z is %f",z);


}
