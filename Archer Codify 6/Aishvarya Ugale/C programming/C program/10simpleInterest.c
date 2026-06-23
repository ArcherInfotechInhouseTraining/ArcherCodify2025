// WAP to calc the simple interst

#include<stdio.h>
void main()
{
    int principle,Time;//vyaj,time,actual rate
    float si,rate;

    printf("\n Enter the values of principle rate and time: ");
    scanf("%d %f %d",&principle,&rate,&Time);

    si=(principle*rate*Time)/100;

    printf("\n Simple interest is: %f",si);

}
