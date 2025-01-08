/* Enter the number and find its factorial

        no=5        5! = 5 * 4 * 3 * 2 * 1      ==> 120
        --------------------------------------------------------------
        int main()
{
    int no,fact,i;

    printf("\n Enter the No: ");
    scanf("%d",&no);

    i=1;
    fact=1;
    while(i<=no)
    {
        fact=fact*i;
        i++;
    }
    printf("\n Factorial is: %d",fact);
    return 0;
}
*/

#include<stdio.h>
void main()
{
    int no,fact=1;
    printf("Enter number :\n");
    scanf("%d",&no);

    while(no!=0)
    {
        fact=fact*no;
        no--;
    }
    printf("factorial : %d",fact);
}
