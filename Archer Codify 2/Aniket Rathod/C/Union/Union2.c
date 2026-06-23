// Enter the different union members and display

#include <stdio.h>
union Demo
{
	int x;
	float y;
	double db;
	char ch;
};

int main()
{
	union Demo v2;

	printf("\n Enter the char value: ");
    	scanf("%c",&v2.ch);

	printf("\n Enter the int value: ");
    	scanf("%d",&v2.x);

	printf("\n Enter the float value: ");
    	scanf("%f",&v2.y);

	printf("\n Enter the double value: ");
    	scanf("%lf",&v2.db);

    	printf("\n ch is: %c",v2.ch);
    	printf("\n x is: %d",v2.x);
    	printf("\n y is: %f",v2.y);
    	printf("\n db is: %lf",v2.db);

	return 0;
}
