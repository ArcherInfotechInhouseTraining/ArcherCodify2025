#include<stdio.h>

struct Color
{
    int R;
    int G;
    int B;
};

int main()
{
    struct Color c1={11,34,21};
 
    printf("\n Red: %d, Green: %d, Blue: %d",c1.R,c1.G,c1.B);

    return 0;
}
