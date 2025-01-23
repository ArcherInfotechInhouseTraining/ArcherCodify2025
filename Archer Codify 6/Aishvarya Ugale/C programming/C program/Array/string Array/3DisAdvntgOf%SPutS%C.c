
	// String - input and display

	// Using %s for input - Ok for single word, it considers space as a string terminating character.

#include<stdio.h>
void main()
{
	char str[40];

	printf("\n Enter the string: ");
	scanf("%s",&str);
	printf("\n Entered String is: %s",str);

}

