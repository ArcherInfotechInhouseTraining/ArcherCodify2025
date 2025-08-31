// if-else ladder
// WAP to the position of employee in the company using the salary.
/*      upto 1K --> Worker

        1K - 3K --> Jr

        3K - 5K --> Sr

        5K - 7K --> Dr

        7K Onward --> CEO
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int Sal;
    
    printf("\n Enter the salary of employee: ");
    scanf("%d",&Sal);
    
    if(Sal<=1000)
    {
        printf("\n Employee is a worker");
    }
    else if(Sal<3000)
    {
        printf("\n Employee is a Jr developer");
    }
    else if( Sal<5000)
    {
        printf("\n Employee is a Sr developer");
    }
    else if( Sal<7000)
    {
        printf("\n Employee is a Director");
    }
    else
    {
        printf("\n Employee is a CEO");
    }
    
    return 0;
}

