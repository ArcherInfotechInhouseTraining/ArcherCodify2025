
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x=4,y=9,z;

	z=-x;
	printf("\n z=%d",x);

	x++;
	printf("\nx=%d",x);
	--y;
	printf("\ny=%d",y);
	
	x--;
	printf("x=%d",x);
	y--;
	printf("y=%d",y);

	z = ++x + y-- ;
	printf("\n x=%d \t y=%d \t z=%d",x,y,z); 

	return 0;
}

