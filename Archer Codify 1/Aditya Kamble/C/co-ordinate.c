#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the Co-Ordinates:");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0)
    {
        printf("AT ORIGIN");
    }
    else if(x==0 && y>0)
    {
        printf("AT Y Axis");
    }
    else if(x>0 && y==0)
    {
        printf("AT X axis:");
    }
    else if(x>0 && y>0)
    {
        printf("AT First Quadrant:");
    }
    else if(x<0 && y>0)
    {
        printf("AT Second Quadrant:");
    }
    else if(x<0 && y<0)
    {
        printf("AT 3rd Quadrant:");
    }
    else{
        printf("AT 4th Quadrant");
    }

    return 0;
}