
	/* Enter the string contains digits and random symbols in between,
	// remove all symbols and digits and display the actual string
	// (perform the operation @ same locations)
	e.g.

		input --> %%6h4el29?lo go@o5d d78ay3!
			  h%6%4el29?lo go@o5d d78ay3!
			  he6%4%l29?lo go@o5d d78ay3!
			  ...
		output --> hello good day
		*/


		#include<stdio.h>
		void main()
		{
		    char str[100];
		    int i;

		    printf("Enter String\n");
		    gets(str);

		    for(i=0;str[i]!='\0';i++)
            {
                if(str[i]>='a' && str[i]<='z' ||  str[i]>='A' && str[i]<='Z')
                {
                    printf("%c",str[i]);

                }
                else if(str[i]==' ')
                {
                    printf(" ");
                }
            }
		}
