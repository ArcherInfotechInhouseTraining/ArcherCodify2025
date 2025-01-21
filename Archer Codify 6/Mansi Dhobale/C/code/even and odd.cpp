//Enter any no and add the even and odd digits from it separately

#include <stdio.h>

int main()
{
	int n,rem;
	printf("\n enter any number=");
	scanf("%d",&n);
	int ecnt=0,ocnt=0;
	for(; n!=0; n=n/10)
	{
		rem=n%10;
		if(rem%2==0)
		{
			ecnt=ecnt+rem;
		}
		else
		{
			ocnt=ocnt+rem;
		}
		printf("\n odd count of an number is=%d",ocnt);
		printf("\n even count of an number is=%d",ecnt);


		return 0;
	}
}
