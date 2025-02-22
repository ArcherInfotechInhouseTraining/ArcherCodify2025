//	//WAP to sort the string in alpha. order
//	Note: you have to modify this program for the ucase, lcase characters.

#include <stdio.h>
int main()
{
	char str[40];
    int i,j,tmp;
	printf("\n Enter the String: ");
	gets(str);
	printf("Entered String is: %s",str);

	for(i=0;str[i+1]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
                if((str[i]>=65 || str[i]<=128) && (str[i]>=97 || str[i]<=113))
                {
				    tmp=str[i];
				    str[i]=str[j];
				    str[j]=tmp;
                }
			}
		}
	}
	printf("\n Sorted String is: %s",str);
	return 0;
}