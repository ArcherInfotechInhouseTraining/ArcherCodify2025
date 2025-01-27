#include <stdio.h>

int highest_altitude(int n, int l[]) {
    int sum = 0, max = l[0];
    for(int i = 0; i<n; i++){
        sum += l[i];
        if(sum>max) max = sum;
    }
    return max >= 0 ? max : 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int l[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &l[i]);
    }
    int result = highest_altitude(n, l);
    printf("%d\n", result);
    return 0;
}