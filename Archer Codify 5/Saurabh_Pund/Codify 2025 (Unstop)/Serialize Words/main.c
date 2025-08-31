#include <stdio.h>
#include <string.h>

const char* follows_ab_pattern(const char* s) {
    // Write your logic here.
    int a = 0, b, found = 1;
    for(b = 0; s[b] != '\0'; b++);

    while(a<b){
        if(s[a] == 'b' && s[a+1] == 'a'){
            found = 0;
        }
        a++;
    }


    return found ? "YES" : "NO";
}

int main() {
    char s[1000];
    fgets(s, 1000, stdin);
    s[strcspn(s, "\n")] = 0; // Remove the newline character
    
    // Call user logic function and print the output
    const char* result = follows_ab_pattern(s);
    printf("%s\n", result);
    
    return 0;
}