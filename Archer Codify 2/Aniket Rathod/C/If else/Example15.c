// if-else ladder
// Enter the co-ordinates of point in 2D system, and display the exact location of that point.

#include<stdio.h>
#include<conio.h>

int main()
{
    int crd1,crd2;
    
    printf("\n Enter the x and y co-ordinates of curve:  ");
    scanf("%d %d",&crd1,&crd2);
    
    if(crd1>0 && crd2>0)
    {
        printf("\n Curve is on 1st part");
    }
    else if(crd1<0 && crd2>0)
    {
        printf("\n Curve is on 2nd part");
    }
    else if(crd1<0 && crd2<0)
    {
        printf("\n Curve is on 3rd part");
    }
    else if(crd1>0 && crd2<0)
    {
        printf("\n Curve is on 4st part");
    }
    else if(crd1!=0 && crd2==0)
    {
        printf("\n Forms a line on x exact");
    }
    else if(crd1==0 && crd2!=0)
    {
        printf("\n Forms a line on y exact");
    }
    else
    {
        printf("\n co-ordinates are on origin");
    }
    
    return 0;
}

