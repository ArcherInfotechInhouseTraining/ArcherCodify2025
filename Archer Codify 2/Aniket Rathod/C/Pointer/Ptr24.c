// Null pointer:


#include <stdio.h>
int main()
{
    void *p = NULL; 	//void pointer
    int x=10;
    double db=34.45;
    float y;

    printf("The size of pointer is:%d\n",sizeof(p));

    p=&x;
    printf("\n value of x is: %d",*(int*)p);

    p=&db;
    printf("\n value of db is: %lf",*(double*)p);

    printf("\n Enter value for float: ");
    scanf("%f",&y);

    p=&y;
    printf("\n Value of y is: %f",*(float*)p);


    return 0;
}

