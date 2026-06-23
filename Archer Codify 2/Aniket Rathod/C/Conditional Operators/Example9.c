// Conditional Operator :
/* program to find the total bill and discount */

#include<stdio.h>
#include<conio.h>

int main(){
    
    float NO1,NO2,NO3,total=0,discount=0;
    
    printf("\n Enter values for 1st price and 2nd price and 3rd price : ");
    scanf("%f %f %f",&NO1,&NO2,&NO3);
    
    total=NO1+NO2+NO3;
    (total>1000) ? /*If true*/(discount=total*0.06) : /*If false*/(discount=total*0.03);
    
    printf("\n Total of 3 Prices is : %0.2f",total);
    printf("\n Discount of total: %0.2f",discount);
    printf("\n Payable Amount : %0.2f",(total-discount));
    
    return 0;   
}






