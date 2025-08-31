#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void determine_winner(int N, char *smit_str, char *joy_str) {
    /* Write your logic here. */
    int freqS1[256] = {0};
    int freqS2[256] = {0}, count1 = 0, count2 = 0;
    for(int i = 0; i<N; i++){
        freqS1[(int)smit_str[i]]++;
        freqS2[(int)joy_str[i]]++;
    }

    for(int i = 0; i < N; i++){
        if(freqS1[(int)smit_str[i]] == 1){
            count1++;
        }
        if(freqS2[(int)joy_str[i]] == 1){
            count2++;
        }
    }

    int mean1 = count1 / N;
    int mean2 = count2 / N;

    if(mean1 > mean2){
        printf("SMIT");
    }
    else if(mean1 == mean2){
        printf("TIE");
    }
    else{
        printf("JOY");
    }



}

int main() {
    int N;
    scanf("%d", &N);
    char smit_str[N];
    char joy_str[N];
    scanf("%s", smit_str);
    scanf("%s", joy_str);
    
    determine_winner(N, smit_str, joy_str);
    
    return 0;
}