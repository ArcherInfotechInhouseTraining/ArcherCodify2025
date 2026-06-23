#include<stdio.h>
#include<conio.h>

int main(){
	int x;
	int y;
	
	printf ("\n enter 2 nos: ");
	scanf("%d %d",&x,&y);
	
	printf("\ Before interchange values of x : %d and y : %d",x,y);
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	printf("\n After interchange values of x : %d and y : %d",x,y);
	
	return 0;
}
