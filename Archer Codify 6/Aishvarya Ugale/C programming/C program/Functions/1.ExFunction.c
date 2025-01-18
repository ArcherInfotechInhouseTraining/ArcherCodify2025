#include<stdio.h>
void mumbai();
void delhi();
void patna();
int main()
{
	printf("\n At start in main()");
	mumbai();
	printf("\n back to main from mumbai");
	delhi();
	printf("\n back to main() from delhi");
	printf("\n At end in main()");
	return 0;
}

void mumbai()
{
	printf("\n i am in mumbai");
}

void delhi()
{
	printf("\n i am in delhi");
	patna();
	printf("\n back to delhi from patna");
}

void patna()
{
	printf("\n i am in patna");
}

/*output

 At start in main()
 i am in mumbai
 back to main from mumbai
 i am in delhi
 i am in patna
 back to delhi from patna
 back to main() from delhi
 At end in main()
 */
