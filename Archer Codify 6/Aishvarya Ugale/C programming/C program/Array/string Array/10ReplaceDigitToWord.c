/* Enter alphanumeric string and replace every digit with equivalent string.

	 str ---> hello ajay, bring 2 apples, 3 kg bananas.
	 output --> hello ajay, bring two apples, three kg bananas.

*/

#include <stdio.h>
void main()
{
	char str[40];
    	int i;
	printf("\n Enter the String: ");
	gets(str);

    for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
        {
            switch (str[i])
            {
            case '1':

                printf("One");
                break;
            case '2':
                printf("Two");
                break;
            case '3':
                printf("Three");
                break;
            case '4':
                printf("Four");
                break;
            case '5':
                printf("Five");
                break;
            case '6':
                printf("Six");
                break;
            case '7':
                printf("Seven");
                break;
            case '8':
                printf("Eight");
                break;
            case '9':
                printf("Nine");
                break;

            }
             i++;
        }
        printf("%c",str[i]);

        }

}

