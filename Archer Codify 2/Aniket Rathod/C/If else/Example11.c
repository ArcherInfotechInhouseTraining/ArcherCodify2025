// if-else():
// WAP to calc the total bill and apply the discount of 12% when the total bill exceeds 500 other discount is 3% 


#include<stdio.h>
#include<conio.h>

int main(){
    
    float no1,no2,no3,no4,total=0,discount=0;
    printf("\n Enter values for no1,no2,no3,no4: ");
    scanf("%f %f %f %f",&no1,&no2,&no3,&no4);
    
    total=no1+no2+no3+no4;
    
    if(total>=500)
    {
        printf("\n Applying the discount of 12%%");
        discount=(total * 0.12);
    }
    else
    {
        printf("\n Applying the discount of 3%%");
        discount=(total * 0.03);
    }
    
    printf("\n Total is: %f",total);
    printf("\n Discount is: %f",discount);
    printf("\n Payable amount is: %f",(total-discount));
    
    return 0;   
}

