// Enter the price of 6 items thw keyboard and find total bill, apply the
 // discount 3% if item price is greater than 100 and 5% if it is greater than 500


#include<stdio.h>
void main()
{
    float arr[6];
    float disc=0.0,total=0.0;
    int i;

    printf("Enter 6 items price :\n");
    for(i=0;i<6;i++)
    {
        scanf("%f",&arr[i]);
    }
     printf(" Price is:\n");
    for(i=0;i<6;i++)
    {
        printf("%f\n",arr[i]);
    }

     for(i=0;i<6;i++)
    {
      if(arr[i]>100)
      {
          disc=disc+(arr[i])*(0.03);
      }
      else if(arr[i]>500)
      {
           disc=disc+(arr[i])*(0.05);
      }

      total=total+arr[i];

    }

    printf("Total Bill:%f\n",total);
    printf("Discount:%f\n",disc);
    printf("Pay Bill:%f\n",(total-disc));
}
