// using logical operators

#include<stdio.h>
void main()
{
    int x=4,y=12;
    int z;

    printf("\n %d",(x>y)&&(y<100)); //0false

    printf("\n  %d",(x!=y)&&(y<100)); //1true

    printf("\n %d",(x>y)||(y<100)); //1

    printf("\n  %d",(x>y)||(y<10)); //0

    printf("\n %d",!(x%2==0)); //0

    printf("\n %d",!(y%5==0)); //1


}
