/* Enter the co-ordinates of point in 2D system, and display the exact location of that point.



                            y axis
                                ^
                       II QD    |   I QD
                                |
                        -+      |   ++
                                |
                  <-------------|------------> x axis
                                |(0,0)
                                |
                        --      |   +-
                                |
                    III QD      V     IV QD


                    */

#include<stdio.h>
void main()
{

    int x,y;
    printf("Enter x Axis :\n ");
    scanf("%d",&x);

    printf("Enter y Axis :\n ");
    scanf("%d",&y);

    if(x>0 && y>0)
    {
       printf("Number is 1st Quadrant\n");
    }
    else if(y>0 && x<0)
    {
        printf("Number is 2nd Quadrant\n");

    }
    else if(x<0 && y<0)
    {
        printf("Number is 3rd Quadrant\n");

    }
    else if(x>0 && y<0)
    {
        printf("Number is 4th Quadrant\n");
    }
    else if(x==0 && y!=0)
    {
        printf("Number is in y axis\n");
    }
    else if(y==0 && x!=0 )
    {
        printf("Number is in x axis\n");
    }
    else
    {
       printf("Number is in origin\n");
    }
}

