// C (gcc 7.3.0)

#include <stdio.h>
#include <stdlib.h>

int user_logic(int n, char* s) {
    // Write your logic here.
    // Parameters:
    //     n (int): Length of the string S
    //     s (char*): Valid parentheses string consisting of digits 0-9 and characters '+', '-', '*', '/', '(', ')'
    // Returns:
    //     int: Maximum nesting depth of the string S

    int top = 0, max = 0, j=0;
    for(int i = 0; i<n; i++){
        if(s[i] == '('){
            j++;
            if(j > max) max = j;
        }
        else if(s[i] == ')') {
            j--;
        }
    }
    return max;
}

int main() {
    int n;
    char s[1001];
    scanf("%d %s", &n, s);
    int result = user_logic(n, s);
    printf("%d\n", result);
    return 0;
}