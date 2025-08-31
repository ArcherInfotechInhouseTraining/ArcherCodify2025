/*  WAP to display multi table of number entered using keyboard

	no = 5;

	no x m = r
	5 x 1 = 5
	5 x 2 = 10
	5 x 3 = 15
	5 x 4 = 20
	.
	.
	.	
	.
	
	5 x 10 = 50
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int p,mul;

    printf("\n Enter a no: ");
    scanf("%d",&p);

    for(mul=1; mul<11; mul++)
    {
        printf("\n Table of that no is: %d",mul,(mul*p));
    }

    return 0;

}