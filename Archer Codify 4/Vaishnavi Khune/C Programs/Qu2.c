#include<stdio.h>

int main()
{
	
	char mail[30],str[10];
	char str1[]=".com";
	char str2[]=".org";
	char str3[]=".net";
	
	int i,j;
	int flag=0;
	int k;
	printf("Enter an Email: ");
	gets(mail);
	int l;	
	for(i=0;mail[i]!='\0';i++)
	{
		l=i;
	}
	
	for(i=0;mail[i]!='\0';i++)
	{
		if(mail[i]=='@')
		{
			k=i;
			flag=2;
			break;
		}
	}
	
	if(flag==2)
	{
		for(i=0;mail[i]!='@';i++)
		{
			if(mail[0]=='.'|| mail[0]=='-'|| mail[k-1]=='.'|| mail[k-1]=='-')
			{
				flag=0;
				break;
			}
	    }
	    
	    if(flag==2)
	    {
	    	for(i=l-3,j=0;mail[i]!='\0';i++)
			{
				str[j]=mail[i];
				j++;
			}
			puts(str);
		
			for(i=0;str[i]!='\0';i++)
			{
				if(str[i]==str1[i])
				{
					flag=11;
				}
				else if(str[i]==str2[i])
				{
					flag=22;
				}
				else if(str[i]==str3[i])
				{
					flag=33;
				}
			}
		}
		
		if(flag==11 || flag==22 || flag==33)
		{
			flag=1;
		}
	}
	
	if(flag==1)
	{
		printf("\nValid Email");
	}
	else
	{
		printf("\nInvalid Email.");
	}
	
	return 0;
}
