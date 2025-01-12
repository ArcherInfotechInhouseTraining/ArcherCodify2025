// program to find the total bill and discount
//total is 500 exceed then 7 % disc else 3%

#include<stdio.h>
void main()
{

    int p1,p2,p3;
    float disc,tot;
    printf("Enter product1 rs \n");
    scanf("%d",&p1);
     printf("Enter product2 rs \n");
    scanf("%d",&p2);
     printf("Enter product3 rs \n");
    scanf("%d",&p3);

    tot=p1+p2+p3;

    (tot>500) ? (disc=tot*0.07) : (disc=tot*0.03);

    printf("Total :%f \n Discount : %f\n",tot,disc);
    printf("Pay : %f",(tot-disc));

    }
