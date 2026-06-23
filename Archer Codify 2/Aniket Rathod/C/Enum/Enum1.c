// Enums are used to decl. multiple constants.
/*
1. using the const keyword
2. using #define
3. using enums
*/

#include <stdio.h>
#define SIZE 100
int main()
{
	const char ch='q';

	printf("\n ch: %c",ch);
	printf("\n size: %d",SIZE);

	// SIZE=300;    // error
	// ch='r';      // error

	return 0;
}
