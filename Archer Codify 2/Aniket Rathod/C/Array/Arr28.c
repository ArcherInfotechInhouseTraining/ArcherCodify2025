/*
split string in to 2 different strings in such way that one string having all words with even character count and another with odd.

	str --> hello all good day to all of you
		
		    ---> s1: good to of
	output ==> |
		   ----> s2: hello all day all you
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char str[50], s1[50], s2[50];
    int i,j;

    printf("\n Enter a String: ");
    gets(str);

    for(i=0;str[i]!="\0";i++)
    {
        if(str[i]>=48 && str[i]<=57)

        for(j=i+1;s1[j]!="\0";j++)
        {
            str[i]==s1[j];

            if(s1[j]%2==0)
            {
                printf("\n Even String is %s",s1[j]);
            }
            else
            {
                str[i]=s2[j];
                printf("\n Odd String is %s",s2[j]);
            }
        }
    }
    return 0;
}