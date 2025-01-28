#include<stdio.h>
int main()
{
	
	char str[50];
	int i;
	printf("Enter the string:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			if(str[i+1]>='a' && str[i+1]<='z')
			{
				str[i+1]=str[i+1]-32;
			}	
		}
		else if(str[i]>='A' && str[i]<='Z' && str[i-1]!=' ')
		{
			str[i]=str[i]+32;
		}
	}
		if(str[0]>='a' && str[0]<='z')
	{
		str[0]=str[0]-32;
	}
	
	printf(" Updated String: ");
	puts(str);
	
	return 0;
}
