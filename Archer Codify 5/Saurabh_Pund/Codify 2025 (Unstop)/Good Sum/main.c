#include <stdio.h>
#include <stdlib.h>

int final_sum_after_operations(int N, int arr[]) {
    int *stack = (int *)malloc(N * sizeof(int));
    int top = -1;  
    for (int i = 0; i < N; i++) {
        int num = arr[i];
        
        if (num < 0) {
            int abs_val = abs(num);
            int temp_sum = 0;
            
             
            while (top >= 0 && temp_sum < abs_val) {
                temp_sum += stack[top--];
            }
            
            
            stack[++top] = abs_val;
        } else {
            stack[++top] = num;
        }
    }
    
     
    int sum = 0;
    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }
    

    free(stack);
    
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
 
    printf("%d\n", final_sum_after_operations(N, arr));
    
    return 0;
}
