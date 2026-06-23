/*  Enter the price of 6 items thw keyboard and find total bill,
apply the discount 3% if item price is greater than 100 and 5% if it is greater than 500

	23	120	600	90	220	50      */

#include<stdio.h>

int main()
{
	float pr[6],tot=0.0,dis=0.0;
	int i;

	printf("\n Enter the price of 6 items: ");
	for(int i=0;i<6;i++)
	{
		scanf("%f",&pr[i]);
	}

	for(int i=0;i<6;i++)
	{
		if(pr[i]>=500)
		{
			dis=dis+(pr[i]*0.05);
		}
		else if(pr[i]>=100)
		{
			dis=dis+(pr[i]*0.03);
		}
		tot=tot+pr[i];
	}

    printf("\n Entered prices are: ");
    for(int i=0;i<6;i++)
    {
        printf("\t %f",pr[i]);
    }

	printf("\n Total Bill: %0.2f",tot);
	printf("\n Discount: %0.2f",dis);
	printf("\n Pay Rs: %0.2f",(tot-dis));

	return 0;
}
