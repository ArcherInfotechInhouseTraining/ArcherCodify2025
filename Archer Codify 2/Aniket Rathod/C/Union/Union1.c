#include <stdio.h>
union Demo
{
	int x;
	float y;
	double db;
	char ch;
};

int main()
{
	union Demo v2;
	printf("\n Memory allocated for v2 is %d bytes",sizeof(v2));
	return 0;
}
