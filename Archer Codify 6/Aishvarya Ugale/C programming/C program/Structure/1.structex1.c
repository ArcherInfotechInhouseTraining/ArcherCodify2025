#include<stdio.h>

struct color
{
    int r;
    int g;
    int b;

};
int main()
{
    struct color c={11,22,33};
    printf("Red :%d \t Blue: %d \t Green :%d ",c.r,c.b,c.g);

  return 0;
}
