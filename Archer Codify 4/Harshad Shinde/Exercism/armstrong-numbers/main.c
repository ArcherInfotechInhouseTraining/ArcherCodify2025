#include <stdio.h>
#include <math.h>

int count_digits(int num) 
{
    int cnt = 0;
    while (num != 0)
    {
        num /= 10;
        cnt++;
    }
    return cnt;
}


int is_armstrong(int num) {
    int original_num = num;
    int num_digits = count_digits(num);
    int sum = 0;
    
    
    while (num != 0) 
    {
        int digit = num % 10;
        sum += pow(digit, num_digits);
        num /= 10;
    }
    return sum == original_num;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
