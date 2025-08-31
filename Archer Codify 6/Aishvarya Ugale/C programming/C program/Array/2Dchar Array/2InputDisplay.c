#include <stdio.h>

	// input and display

void main()
{
	char s[5][50];
	int i;

	printf("\n Enter the student List \n");
	for(i=0;i<5;i++)
	{
		gets(s[i]);
	}
	printf("\n Student List \n");
	for(i=0;i<5;i++)
	{
		printf("\n %s",s[i]);
	}

}
