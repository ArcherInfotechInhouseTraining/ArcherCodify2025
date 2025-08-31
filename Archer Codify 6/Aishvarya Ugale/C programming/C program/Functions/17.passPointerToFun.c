// Passing the pointer to function

	// WAP to convert the string into uppercase

	#include <stdio.h>
#include <stdlib.h>
void toucase(char *s)
{
	int i;
	for(i=0;*(s+i)!='\0';i++)
	{
		if(*(s+i)>='a' && *(s+i)<='z')
		{
			*(s+i)=*(s+i)-32;
		}
	}
}
int main()
{
	int str[50];

	printf("\n Enter the string: ");
	gets(str);

	printf("\n Entered string: %s",str);
	toucase(str);
	printf("\n uppercase string: %s",str);

	return 0;
}
