#include<stdio.h>
#include<conio.h>

int main()
{
	int a=4,q=5;
	float p,b,ans;
	
	printf("\n enter nos for P & B: ");
	scanf("%f %f",&p,&b);

	printf("\n (a%%2==0) is %d",(a%2==0));

	printf("\n q>a is %d",(q>a) );

	printf("\n (a==q) is %d ",(a==q));
	
	
	ans=(p>b);
	printf("\n Ans of (p>b) is %f",ans) ;

	ans=(b!=p);
	printf("\n Ans of (b!=p) is %f",ans) ;

	return 0;
}

