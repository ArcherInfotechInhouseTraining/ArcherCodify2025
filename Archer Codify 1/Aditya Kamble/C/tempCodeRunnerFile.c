#include<stdio.h>
/*
int main()
{
    char str[]={'a','b','c','\0'};
    char nm[40]="Aditya";

    printf("\n String str is: %s",str);
    printf("\n String str is: %s",nm);
}

	// different ways of String display 

	1 - using %s as format specifier
	2 - using loop and %c - character by character display
	3 - using puts() function

2.

int main()
{
    char str[20] = {'h','e','l','l','o','\0'};
    int i;
    printf("\n String str is: ");
    for(i=0; str[i]!='\0'; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}



int main()
{
   char str[20] = {'h','e','l','l','o',' ',' ', '\0'};
    int i;
    printf("\n String str is: ");
    for(i=0; str[i]!='\0'; i++)
    {
        printf("%c",str[i]);
    }

    printf("\n String is: ");
    puts(str);
    printf("\n String str is: %s",str);

    
    return 0;

}



// String - input and display

// Using %s for input - Ok for single word, it considers space as a string terminating character.

int main()
{
    char str[40];
    printf("\n Enter the String : ");
    scanf("%s",&str);
    printf("\n Entered String is : %s",str);
    return 0;
}



// Using loop and %c - character by character input - Not a proper option

int main()
{
    char str[40];
    int i;
    printf("\n Enter the String : ");
    for(i=0;  ; i++)
    {
        scanf("%c",&str[i]);
    }
    printf("\n Entered String is : %s",str);
    return 0;
}

// Using %[^\n] for input - here \n defined as a terminator. - OK



int main()
{
	char str[40];

	printf("\n Enter the string: ");
	scanf("%[^\n]",&str);
	printf("\n Entered String is: %s",str);
	return 0;
}


// Using gets() - input all entered characters and when user hits enter key, it will will place
null('\0') at the end and terminates.

#include <stdio.h>
int main()
{
	char str[40];

	printf("\n Enter the string: ");
	gets(str);
	printf("\n Entered String is: %s",str);
	return 0;
}


int main()
{
    char str[50];
    int i,cnt=0;

    printf("\n Enter the String: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        cnt++;
    }

    printf("\n Length Of The String %d ",cnt);
    return 0;   
}

    Enter any String and Convert it in to Uppercase.


int main()
{
    char str[50];
    int i;

    printf("\n Enter The String: ");
    gets(str);

    printf("\n Entered String: %s",str);

    for(i=0; str[i]!=0; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }

    printf("\n Uppercase string : %s", str);

    return 0;
}

       Enter the string contains digits and random symbols in between,
	   remove all symbols and digits and display the actual string
	   (perform the operation @ same locations)



int main()
{
    char str[50];
    int i, flag=0;

    printf("\n Enter the String: ");
    gets(str);


    for(i=0; str[i]!=0; i++)
    {
        if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >='A' && str[i] <='Z')) || str[i] == ' ') 
        {
            printf("%c",str[i]);
        }
        else 
        {
            printf("");
        }
    }
    printf("\n");
    return 0;
}



int main()
{
    char str[50];
    int i;

    printf("Enter an String:");
    gets(str);

    for(i=0; str[i]!=0; i++)
    {
        if(str[i]!=32 && str[i-1]==32)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    if(str[0]!=' ' && (str[0]>='a' && str[0]<='z'))
    {
        str[0]=str[0]-32;
    }
    printf("\n String is: %s",str);
    return 0;
}

Enter the string and copy the string into another character array.



int main()
{
    char s1[30], s2[30];
    int i;
    printf("\n Enter any String: ");
    gets(s1);

    for(i=0; s1[i]!=0; i++)
    {
        s2[i]=s1[i];
    }

    s2[i]='\0';
    printf(" \n Original String: %s ",s1);
    printf("\n Copied String: %s",s2);

    return 0;
}

int main()
{
    char s1[30], s2[30];
    int i,j;
    printf("\n Enter an String: ");
    gets(s1);

    for(i=0; s1[i]!=0; i++);
    for(j=0, i--;i>=0; i--,j++ )
    {
        s2[i]=s1[j];
    }

    s2[j]='\0';

    printf("\n Original String: %s ",s1);
    printf("\n Copied string: %s", s2);

    return 0;
    
}



// WAP to find two strings are matching or not.

int main()
{
    char s1[50], s2[50];
    int i,j,flag=0;

    printf("\n Enter 1st String: ");
    gets(s1);

    printf("\n Enter 2nd String: ");
    gets(s2);

    for(i=0; s1[i]!=0; i++);
    for(j=0; s2[j]!=0; j++);

    if(i==j)
    {
            for(i=0; i<=j; i++)
            {
                if(s1[i]!=s2[i])
                {
                    flag=1;
                    break;
                }
            }
    }
    else
    {
        flag=1;
    }

    if(flag==0)
    {
        printf("\n String are Matching: ");
    }
    else
    {
        printf("\n String are not Matching: ");
    }
    return 0;

}



// Enter any string and find the number of words in it.

int main()
{
    char str[50];
    int i, wcnt=0;

    printf("\n Enter an String: ");
    gets(str);

    for(i=0; str[i]!=0; i++)
    {
        if(str[i]==' ')
        {
            wcnt++;
        }
    }
    printf("\n String is: %s",str);
    printf("\n Word Count :%d",wcnt+1);

}



	// str:   --hello----good------day---to-all---of----you-----\0
    //              |   					   | 
	// 	 sp					   ep

int main()
{
    char str[50];
    int i, sp,ep,wcnt=0;

    printf("\n Enter Strings: ");
    gets(str);

    for(i=0; str[i]==32; i++);
    sp=i;
    for(i=0; str[i]!=0; i++);
    for(i=i-1; str[i]==32; i--);
    ep=i;

    for( ; sp<=ep; sp++)
    {
        if(str[sp]==32 && str[sp+1]!=32)
        {
            wcnt++;
        }
    }

    printf("\n Enter String is %s",str);
    printf("\n Word Count of String is %d",wcnt+1);

    return 0;
} 



// WAP to delete all unwanted spaces from from string 

int main()
{
    char str[100];
    int i;

    printf("\n Enter any String : ");
    gets(str);

    for(int i=0; str[i]!=0; i++)
    {
        if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >='A' && str[i] <='Z')) || (str[i-1]==32 && str[i]!=32) || str[i] == ' ' && str[i+1]!=32  )
        {
            printf("%c",str[i]);              
        }
        else
        {
            printf("");
        }
    }


    printf("\n");
    return 0;
}



// // WAP to interchange the first and last character of every word in the string

// ------hello---best--morning--student-----

int main()
{
    char str[30],tmp;
    int i,j;

    printf("\n Enter any String: ");
    gets(str);

    for(i=0; str[i]!=0; i++)
    {
        for(j=i; str[j]==32; j++);
        i=j;
        if(str[i]==0)
        {
            break;
        }
        for(j=i; (str[j]!=32 && str[j]!=0); j++);
        j=j-1;

        printf("\n i=%d \t j=%d", i,j);

        tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;

        i=j;
    }
}

*/

// WAP to interchange the first and last character of every word in the string

int main()
{
    char str[50],tmp;
    int i,j,k;

    printf("\n Enter any string: ");
    gets(str);

    for(i=0; str[i]!=0; i++)
    {
        for(j=i; str[j]==32; j++);
        i=j;

        if(str[i]==0)
        {
            break;
        }

        for(j=i; (str[j]!=32 && str[j]!=0); j++);
        j=j-1;
        k=j;
        while(i<=j)
        {
            tmp=str[j];
            str[j]=str[i];
            str[i]=tmp;
            i++;
            j--;
        }
        i=k;
    }

    printf("\n String after Interchanging: ");
    return 0;
    
}