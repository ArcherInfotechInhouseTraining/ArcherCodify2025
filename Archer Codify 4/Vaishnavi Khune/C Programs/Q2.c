#include<stdio.h>

int main()
{
	
	char mail[30],str[10];
	int i,j;
	int flag=0;
	int k;
	printf("Enter an Email: ");
	gets(mail);
	int l;	
	
	for(i=0;mail[i]!='\0';i++)
	{
		if(mail[i]=='@')
		{
			k=i;
			flag=1;
		}
		l=i;
		
		for(i=0;mail[i]!='@';i++)
		{
			if(mail[0]=='.'|| mail[0]=='-'|| mail[k-1]=='.'|| mail[k-1]=='-')
			{
				flag=0;
				break;
			}
			
			for(i=l-4,j=0;mail[i]!='\0';i++)
			{
				str[j]=mail[i];
				j++;
			}
	
	    	if(str==".com"|| str==".org" || str==".net")
			{
				flag=1;
			}
		}
		
	}
		
	if(flag==1)
	{
		printf("Valid Email");
	}
	else
	{
		printf("Invalid Email.");
	}
	
	return 0;
}
