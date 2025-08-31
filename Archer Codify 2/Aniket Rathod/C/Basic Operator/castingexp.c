#include<stdio.h>
#include<conio.h>

int main(){
	
	int p,q;
	float r;
	
	printf("\n enter the value for 2 nos: ");
	scanf("%d %d", &p,&q);
	
	r = p/q;
	printf("\n answer is  : %f",r);
	
	r =(float)p/q;
	printf("\n answer is : %f",r);
	
	r =p/(float)q;
	printf("\n ans is : %f",r);
	
	r = (float)p/(float)q;
	printf("\n ans is : %f",r);
	
	return 0;
}
