#include<stdio.h>
#include<conio.h>

int main(){
	int x;
	float b;
	char a;
	double c;
	
	printf("\n enter a int and two fractional values :");
	scanf("%d %f %lf", &x, &b, &c);
	
	printf("\n enter a char: ");
	fflush(stdin);
	scanf("%c",&a);
	
	return 0;
}
