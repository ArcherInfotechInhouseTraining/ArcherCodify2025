#include <stdio.h>

void findFlowerIndexes(int n, int t, int arr[], int result[]) {
    // User will implement this function
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if((long)(arr[i] + arr[j]) == t && i != j){
                *(result+0) = j;
                *(result+1) = i;
                break;
            }
        }
    }
}

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result[2];
    findFlowerIndexes(n, t, arr, result);
    printf("%d %d\n", result[0], result[1]);
    return 0;
}