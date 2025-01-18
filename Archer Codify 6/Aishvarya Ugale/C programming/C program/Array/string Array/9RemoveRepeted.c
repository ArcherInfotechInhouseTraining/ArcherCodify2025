
	/* WAP to remove repeated character from string

	str --> good day to all of you
	output-> god aytlfu
	*/

#include <stdio.h>
void main()
{
	char str[40];
    	int i,j,k;
	printf("\n Enter the String: ");
	gets(str);
	printf("Entered String is: %s",str);

	for(i=0;str[i+1]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				for(k=j;str[k]!='\0';k++)
				{
					str[k]=str[k+1];
				}
			}
		}
	}
	printf("\n Output String is: %s",str);


}
