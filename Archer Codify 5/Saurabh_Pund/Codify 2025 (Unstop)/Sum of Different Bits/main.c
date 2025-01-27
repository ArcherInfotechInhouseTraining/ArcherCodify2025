#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX 200002

long long int compareBits(char* a, char* b) {
    // User logic goes here
    int alen = strlen(a);
    int blen = strlen(b);
    int sum = 0;

    int start = 0, end = alen, temp = alen;
    
    while(temp <= blen){
        char *sub = (char *)malloc(sizeof(char) * alen+1);
        strncpy( sub, b + start, alen);
        sub[end] = '\0';
        for(int i = 0; i<alen; i++){
            if(sub[i]!= a[i]){
                sum+=1;
            }
        }
        free(sub);
        start++;
        temp++;
    }
    return sum;
}

int main() {
    char a[MAX], b[MAX];
    scanf("%s %s", a, b);
    printf("%lld", compareBits(a, b));
    return 0;
}