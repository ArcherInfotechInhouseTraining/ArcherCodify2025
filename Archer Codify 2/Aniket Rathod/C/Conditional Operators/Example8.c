// Conditional Operator :
/* WAP to find small bet 3 nos using conditional operator     #Method : 2nd */

#include<stdio.h>
#include<conio.h>

int main(){
    
    int NO1,NO2,NO3,Sml=0;
    
    printf("\n Enter values for NO1 and NO2 and NO3 : ");
    scanf("%d %d %d",&NO1,&NO2,&NO3);
    
    Sml = (NO1<NO2) ? (NO1<NO3)?NO1:NO3 : (NO2<NO3)?NO2:NO3;
    printf("\n Small no is : %d",Sml);
    
    return 0;   
}






