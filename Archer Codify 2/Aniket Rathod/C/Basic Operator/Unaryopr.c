#include<stdio.h>
#include<conio.h>

int main(){
	
	int a,b,c;
	
	printf("\n inter value of a b and c: ");
	scanf("%d %d %d",&a, &b, &c);
	
	a=-b;
	printf("\n  first = show values of : %d : %d : %d",a,b,c);
	
	b++;
	--c;
	printf("\n second = show values of : %d : %d : %d", a,b,c);
	
	c = ++a + b--;
	printf("\n third = show values of : %d : %d : %d", a,b,c); 
	
	return 0;
}
