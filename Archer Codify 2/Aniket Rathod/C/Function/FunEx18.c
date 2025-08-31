// WAP to find the length of string using the function

#include<stdio.h>
#include<stdlib.h>

int findlength(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

int main()
{
	char s[50];
	int len;

	printf("\n Enter the string: ");
	gets(s);

	len=findlength(s);

	printf("\n String is: %s",s);
	printf("\n length of string: %d",len);

	return 0;	
}
