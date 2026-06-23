// Enter any two numbers, multi. by 10 to the half of 2nd number, sub ans from
	// x^3

	#include<stdio.h>
	void main()
	{
	    int x,y,ans,tot;

	    printf("Enter x:\n");
	    scanf("%d",&x);
	    printf("Enter y:\n");
	    scanf("%d",&y);
	    tot=(y/2)*10;
	    ans=(x*x*x)-tot;

	    printf("x:%d\n",x);
        printf("y:%d\n",y);
	    printf("Tot:%d\n",tot);
	    printf("ans:%d\n",ans);


	}
