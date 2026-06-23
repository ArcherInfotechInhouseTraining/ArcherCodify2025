#include<stdio.h>
#include<conio.h>

int main(){
	int x;
	int y;
	int tmp;
	
	printf("\n enter 2 nos: ");
	scanf("%d %d",&x,&y);
	
	printf("\n before interchange of 1st %d with %d", x,y);
	
	tmp = x;
	x = y;
	y = tmp;
	
	printf("\n After interchanging of 2nd %d with 1st %d", y,x);
	
	return 0;
	
}
