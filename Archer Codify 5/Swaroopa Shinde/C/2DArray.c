// 2D Character Array
/*Collection of Strings(1D Character array)

		decl syntax:

			char <ar_nm>[<No_of_lines>][<no_of_chars_per_line>]

			e.g.
			char s[5][50];


			[a][m][i][t][ ][p][a][t][i][l][0][][][][][][][][][][][][][][][][][][][][] <----- s[0]
			[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] <----- s[1]
			[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] <----- s[2]
			[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] <----- s[3]
			[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] <----- s[4]


	*/// init and display
/*
	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
	    char s[5][50]={"\nSwarupa","\nOmkar","\nSurekha","\nPravin"};
	    int i;
	    printf("The student list is:");
	    for(i=0;i<5;i++)
        {
            printf("%s",&s[i]);
        }
        return 0;
	}
*/

//==================================================================================================

// input and display
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[5][50];
    int i;
    printf("\n Enter the student list:\n");
    for(i=0;i<5;i++)
    {
        gets(s[i]);
    }
    printf("\n The student list is:\n");
    for(i=0;i<5;i++)
    {
        printf("%s",&s[i]);
    }
    return 0;
}
*/

//====================================================================================================

//// WAP to search friend in the friendlist
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[5][50];
    char nm=[40];
    int i,j,k,cnt=0,flag;
    printf("\nEnter the student list\n");
    for(i=0;i<5;i++)
    {
        gets(s[i]);
    }
    printf("\nEnter the name to be searched\n");
    gets(nm);
    for(j=0;nm[j]!='\0';j++)
        printf("\nStudent list is\n");
    for(i=0;i<5;i++)

        printf("%s",&s[i]);
    flag=0;
    for(k=0;s[i][k])

}
*/

//=========================================================================================================

//// Write a program to reverse the string
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ar[30],t[40];
    int i,top;
    printf("\n Enter the string to be reverse:");
    gets(ar);
    {
        printf("\n The string is:%s",ar);
    }
    top=-1;
    for(i=0;ar[i]!=0;i++)
    {
        top++;
        t[top]=ar[i];
    }
    i=0;
    while(top!=-1)
    {
        ar[i]=t[top];
        i++;
        top--;
    }
    printf("\n The string After reverse is:%s",ar);
    return 0;
}
*/

//==========================================================================================================

// Detailed menu deiven program of array/static impl. of stack
#define SIZE 10
int main()
{
    int stack[SIZE],top,opt;
    top=-1;
    while(1)
    {
        printf("----------------------MENU--------------------");
        printf("\n 1.Push \n 2.pop \n 3.Stop");
        printf("Enter your Choice:");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            if(top<(SIZE-1))
            {
                printf("Enter the number:");
                top++;
                printf("%d",stack[top]);
            }
        else
        {
            printf("STack is full");
        }
        break;
        case 2:
            if(top!=-1)
            {
                printf("After pop operation:%f",stack[top]);
                top--;
            }
            else
            {
                printf("Stack is empty:");
            }
            break;
        case 3:
            exit(0);
        default:
            printf("Incorrect option");

        }
    }
}
