
	// Enter any string and find the length.(no of characters)

	#include<stdio.h>
	void main()
	{
	    char str[50];
	    int i,cnt=0;

	    printf("Enter Any String\n");
	    gets(str);
	    printf("String is: %s",str);
/*
	    for(i=0;str[i]!='\0';i++)
        {
            cnt++;
        }
         printf("\nCount is: %d",cnt);
         */

         for(i=0;str[i]!='\0';i++);
         printf("\nCount is: %d",i);




	}
