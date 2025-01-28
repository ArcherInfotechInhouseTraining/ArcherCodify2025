#include<stdio.h>

int main()
{
	
	char num[10]="10010101";
	int i,l,j                                           ;
	int ans=1;
	int fans=0;
	
	for(i=0;num[i]!='\0';i++)
	{
		l=i;
	}
	for(i=0;num[i]!='\0';i++)
	{
		if(num[i]=='1')
		{
			ans=1;
			for(j=0;j<(l-i);j++)
			{
				ans=ans*2;
			}
			printf("\nans=%d",ans);
			fans=fans+ans;
		}
		
	}
	
	printf("Decimal Values: %d ",fans);
	
	return 0;
}
