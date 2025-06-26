#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *stack = (int *)malloc(n * sizeof(int));
    int top = 0;
    char character[1000];
    
    // Read the input line
    scanf("%[^\n]", character);
    
    char *token = strtok(character, " ");
    
    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && strlen(token) > 1)) {
            stack[top++] = atoi(token);
        } else {
            int leng = top - 1;
            if (strcmp(token, "+") == 0) {
                stack[top++] = stack[leng] + stack[leng - 1];
            } else if (strcmp(token, "D") == 0) {
                stack[top++] = stack[leng] * 2;
            } else if (strcmp(token, "C") == 0) {
                top--;
            }
        }
        token = strtok(NULL, " ");
    }
    
    int sum = 0;
    for (int i = 0; i < top; i++) {
        sum += stack[i];
    }
    
    printf("%d\n", sum);
    
    free(stack);
    return 0;
}

