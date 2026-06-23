
	// String - input and display

	// Using %s for input - Ok for single word, it considers space as a string terminating character.
/*
#include<stdio.h>
void main()
{
	char str[40];

	printf("\n Enter the string: ");
	scanf("%s",&str);
	printf("\n Entered String is: %s",str);

}
*/
//========================================================================================================================

// Using loop and %c - character by character input - Not a proper option

#include<stdio.h>

void main()
{
	char str[40];
	int i;

	printf("\n Enter the string: ");

	for(i=0; i<10 ; i++)
	{

		scanf("%c",&str[i]);
	}


	printf("\n Entered String is: %s",str);

}
//========================================================================================
/*
// Using %[^\n] for input - here \n defined as a terminator. - OK

#include <stdio.h>
int main()
{
	char str[40];

	printf("\n Enter the string: ");
	scanf("%[^\n]",&str);
	printf("\n Entered String is: %s",str);
	return 0;
}
//===================================================================================================

	// Using gets() - input all entered characters and when user hits enter key, it will will place
			  null('\0') at the end and terminates.

int main()
{
	char str[40];

	printf("\n Enter the string: ");
	gets(str);
	printf("\n Entered String is: %s",str);
	return 0;
}
*/

