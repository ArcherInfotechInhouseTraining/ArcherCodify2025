/* WAP to calc the simple interst:

formula: 	si = ( p * r * n ) / 100 ;
	
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int p,n;
	float si,r;
	
	printf("\n Enter the values of p, r and n: ");
	scanf("%d %d %f",&p,&n,&r);
	
	
	si = (p*r*n)/100;
	printf("\n Simple Interest is: %f",si);
	
	return 0;
}

