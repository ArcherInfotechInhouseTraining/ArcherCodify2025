#include<stdio.h>

int main()
{
	char str[50],str1[50];
	int i,j;
	
	printf("Enter the String:");
	gets(str);
	
	j=0;
	str1[0]=str[0];
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			j++;
			str1[j]=str[i+1];
			
		}
	}
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]>'a' && str1[i]<'z')
		{
			str1[i]=str1[i]-32;
		}
	}
	
	printf("Acronym: %s ",str1);
	return 0;
}
