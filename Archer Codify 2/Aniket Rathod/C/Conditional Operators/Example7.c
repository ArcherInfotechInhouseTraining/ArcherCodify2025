// Conditional Operator :
/* WAP to find max bet 2 nos using conditional operator     #Method : 2nd */

#include<stdio.h>
#include<conio.h>

int main(){
    
    int NO1,NO2,Max=0;
    
    printf("\n Enter values for NO1 and NO2 : ");
    scanf("%d %d",&NO1,&NO2);
    
    Max = (NO1>NO2) ? NO1 : NO2;
    printf("\n Max no is : %d",Max);
    
    return 0;   
}






