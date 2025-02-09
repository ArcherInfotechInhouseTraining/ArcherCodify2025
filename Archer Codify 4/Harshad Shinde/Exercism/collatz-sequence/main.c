#include <stdio.h>

int collatz(int num)
{
    int stp = 0;

    while (num != 1) 
    {
        if (num % 2 == 0)
        {
            
            num = num / 2;
        }
        else
        {
            
            num = 3 * num + 1;
        }
        stp++;
    }

    return stp;
}

int main() 
{
    int num;

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    
    printf("Collatz sequence starting from %d: ", num);
    int stp = collatz(num);
    printf("\nIt took %d steps to reach 1.\n", stp);

    return 0;
}
