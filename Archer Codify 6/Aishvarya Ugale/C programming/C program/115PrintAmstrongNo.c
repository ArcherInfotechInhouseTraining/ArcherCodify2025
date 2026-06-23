//Write a C program to print all Armstrong numbers between 1 to n.


#include<stdio.h>

void main()
{
    int no, cnt, i, temp, mul, sum, rem;

    printf("Enter number: ");
    scanf("%d", &no);

    // Loop through all numbers from 1 to 'no'
    for(i = 1; i <= no; i++)
    {
        temp = i;  // Save the original number to 'temp'
        cnt = 0;
        sum = 0;

        // Count the number of digits in the current number
        while (temp != 0) {
            cnt++;
            temp = temp / 10;
        }

        // Reset temp to the original number to extract digits again
        temp = i;

        // Calculate the sum of digits raised to the power of 'cnt'
        while (temp != 0) {
            rem = temp % 10;
            mul = 1;

            // Multiply the digit by itself 'cnt' times
            for(int j = 0; j < cnt; j++) {
                mul = mul * rem;
            }

            sum += mul;
            temp = temp / 10;
        }

        // If the sum equals the original number, it's an Armstrong number
        if (sum == i) {
            printf("%d\n", i);
        }
    }
}
