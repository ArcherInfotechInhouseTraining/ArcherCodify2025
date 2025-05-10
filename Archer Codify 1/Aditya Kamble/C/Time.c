#include<stdio.h>

int main()
{
    int t;
    int s1,s2;
    int m1,m2;
    int h1,h2;


    printf("\n Enter a Time T1: ");
    scanf("%d%d%d",&h1,&m1,&s1);

    printf("\n Enter a Time T2: ");
    scanf("%d%d%d",&h2,&m2,&s2);

    int s = s1+s2;
    int m = m1+m2+(s/60);
    int h = h1+h2+(m/60);
    
    printf("\n Total Seconds is %d :", s);
    printf("\n Total minutes is %d :",m);
    printf("\n Total Hour is %d :",h);
    printf("\n Total Time is %d:%d:%d",h,m,s);

    return 0;

}