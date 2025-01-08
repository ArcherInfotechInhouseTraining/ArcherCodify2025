/* split string in to 2 diferent strings in such way that one string having all words with
	// even character count and another with odd.

	str --> hello all good day to all of you

		    ---> s1: good to of
	output ==> |
		   ----> s2: hello all day all you
		   */



#include <stdio.h>
void main()
{
	char str[100],s1[100],s2[100];
    	int i,wordlength=0,flg=0,k=0,z;
	printf("\n Enter the String: ");
	gets(str);


	 for(i=0;str[i]!='\0';i++)
	{

           if(str[i]!=' ' && str[i]!='\0')
        {
            if(flg==0)
            {
                flg=1;
            wordlength++;
            }
        }
        else
        {
            flg=0;
        }
	}
	printf("\n%d",wordlength);

    for(i=0;str[i]!='\0';i++)
	{

           if(str[i]!=' ' && str[i]!='\0')
        {
            if(flg==0)
            {
                for(z=i;str[z]!=' ';z++)
                {

                s1[k]=str[z];
                s2[k+1]=str[z];
                k++;
                }
                flg=1;
            }
        }
        else
        {
            flg=0;
        }
	}
	printf("Even string: %s\n",s1);
	printf("Odd string: %s\n",s2);

}

