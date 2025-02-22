/* 
Enter alphanumeric string and replace every digit with equivalent string.

	 str --> hello ajay, bring 2 apples, 3 kg bananas.
	 output--> hello ajay, bring two apples, three kg bananas.

*/

#include <stdio.h>
int main()
{
    char str[50];
	int i;
	char numbers[10][8] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	for(i=0;i<10;i++)
	{
		printf("\n %s",numbers[i]);
	}
	
	printf("\n Enter the String: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	    if(str[i]>=48 && str[i]<=57)
	    {
		    printf("\n %d - %s",str[i]%48, numbers[str[i]%48]);
	    }
	}
	return 0;
}
