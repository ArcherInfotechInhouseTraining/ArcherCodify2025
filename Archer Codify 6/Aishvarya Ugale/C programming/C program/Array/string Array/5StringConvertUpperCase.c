	// Enter any string and convert it in to uppercase.

	#include<stdio.h>
	void main()
	{
	    char str[50];
	    int i;

	    printf("Enter String\n");
	    gets(str);

	    for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }

        printf ("\nUppercase String is :%s",str);

	}
