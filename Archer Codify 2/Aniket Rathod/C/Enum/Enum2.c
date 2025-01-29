#include<stdio.h>

int main()
{
	enum{red, green=5, blue, black=10,pink};
		
	printf("red: %d \t green: %d \t blue: %d \t black: %d \t pink: %d",red,green,blue,black,pink);

	return 0;
}
