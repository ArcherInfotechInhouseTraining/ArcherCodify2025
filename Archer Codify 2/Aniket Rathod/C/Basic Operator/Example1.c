/*	Enter any two numbers, multi. by 10 to the half of 2nd number, sub ans from x^3		*/

#include<stdio.h>
#include<conio.h>
 
int main(){
	
	int a,b;
	float ans,p;
	
	printf("\n Enter 2 nos : ");
	scanf("%d %d",&a,&b);
	
	p = ((float)a/b)*10;
	printf("\n First ans is : %f",p);
	ans = ans-(a*a*a);
	
	printf("\n Final Answer is:%f",ans);
	
	return 0;
}
