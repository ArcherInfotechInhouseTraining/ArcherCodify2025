//WAP to sort the string in alpha. order
#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[50];
int i,j,temp,A,B;
printf("Enter the string:");
gets(str);
printf("Entered string is:%s",str);
for(i=0;str[i]!='\0';i++)
{
    for(j=i+1;str[j]!='\0';j++)
    {
        A=(str[i]>='A' && str[i]<='Z'? str[i]+32:str[i]);
        B=(str[i]>='A' && str[i]<='Z'? str[i]+32:str[i]);

            if(A>B)

        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }

    }
}
printf("sorted string is:%s",str);
return 0;
}


//===========================================================================================================

//// WAP to remove repeated character from string

	//str -->  good day to all of you
	//output-> god aytlfu
/*
	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
	    char str[50];
	    int i,j,k;
	    printf("Enter the string:");
	    gets(str);
	    printf("The string is:%s",str);
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
        printf("The sorted array is:%s",str);
        return 0;
	}
*/

//=======================================================================================================

// Enter alphanumeric string and replace every digit with equivalent string.
//str --> hello ajay, bring 2 apples, 3 kg bananas.
	// output--> hello ajay, bring two apples, three kg bananas.
/*
	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
	 char str[50],s;
	 int i;
	 char numbers[10][8]= {
	 "zero","one","two","three","four","five","six","seven","eight","nine"
	 };
	 for(i=0;i<10;i++)
     {
         printf("\n %s",numbers[i]);
     }
     printf("\n Enter the string:");
     gets(str);
     printf("The string is:%s",str);
     for(i=0;str[i]!='\0';i++)
     {
         if(str[i]>=48&&str[i]<=57)
            {
             printf("\n %d-%s",str[i]%48,numbers[str[i]%48]);
            }
         s="hello ajay, bring 2 apples, 3 kg bananas";
         printf(s);

     }
     return 0;
	}
*/
