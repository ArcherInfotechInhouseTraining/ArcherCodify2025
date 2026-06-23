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
    int No,Mul,Res;
    
    printf("\n enter a number: ");
    scanf("%d",&No);
    
    for(Mul=1;Mul<=10;Mul++)
    {
        Res=No*Mul;
        printf("\n NO %d multiply by %d equals to  : %d",No,Mul,Res);
    }
    
    return 0;
}
