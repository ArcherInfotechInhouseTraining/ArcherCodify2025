#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[2];
    scanf("%s", &s);
    if(s[0] == 'a' || s[0] == 'c' || s[0] == 'e' || s[0] == 'g'){
        s[1] % 2 == 0 ? printf("White") : printf("Black");
    }
    else{
        s[1] % 2 != 0 ? printf("White") : printf("Black");
    }
    return 0;
}