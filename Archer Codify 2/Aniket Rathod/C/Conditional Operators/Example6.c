// Conditional Operator :
/* WAP to find max bet 2 nos using conditional operator */

#include<stdio.h>
#include<conio.h>

int main()
{
    int NO1,NO2,temp=0;
    
    printf("\n Enter values for NO1 and NO2 : ");
    scanf("%d %d",&NO1,&NO2);
    
    temp=NO1;
    temp=NO2;
    (NO1<NO2) ? printf("\n NO1 is max %d",NO1) : printf("\n NO2 is max %d",NO2);
    
    return 0;
  
}

