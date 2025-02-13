// WAP to remove repeated character from string

#include <stdio.h>
#include <conio.h>

int main()
{
    char str[50];
    int i,j,k;
    
    printf("\n Enter a String: ");
    gets(str);
    
    printf("\n Entered string is: %s",str);
    
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
    
    printf("\n Alpha. String order is: %s",str);

    return 0;
}