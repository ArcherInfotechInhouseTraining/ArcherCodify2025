/*
merge two string as per the word length

	s1 --> hello good morning
	s2 --> how are you all today students

	output : str --> how are you all hello good today morning students
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char s1[30], s2[30], str[30];
	int i,j;

	printf("\n Enter String 1: ");
	gets(s1);

	printf("\n Enter String 2: ");
	gets(s2);

	printf("\n 1st Entered string is: %s",s1);

	printf("\n 2nd Entered string is: %s",s2);
	
	strcat(s1,s2);

	printf("\n Comepete String is: %s",s1);

	for(i=0;s1[i]="\0";i++)
	{
		for(j=i+1;s1[j]="\0";j++)
		{

		}
	}


	return 0;
}