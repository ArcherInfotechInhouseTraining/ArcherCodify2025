// if-else (Without If-else)
// Write a C program to count total number of notes in given amount.

#include <stdio.h>
#include <conio.h>

int main()
{
    int rs;
    int note1000=0,note500=0,note100=0,note50=0,note20=0,note10=0,note5=0,note2=0,note1=0;
    
    printf("\n Enter an Amount: ");
    scanf("%d",&rs);
    
    note1000 = rs/1000;
    rs =rs%1000;
    
    note500 = rs/500;
    rs = rs%500;
    
    note100 = rs/100;
    rs = rs%100;
    
    note50 = rs/50;
    rs = rs%50;
    
    note20 = rs/20;
    rs = rs%20;
    
    note10 = rs/10;
    rs = rs%10;
    
    note5 = rs/5;
    rs = rs%5;
    
    note2 = rs/2;
    rs = rs%2;
    
    note1 = rs/1;
    rs = rs%1;
    
    printf("\n Rs in 1000's notes: %d \n Rs in 500's notes: %d \n Rs in 100's notes: %d \n Rs in 50's notes: %d \n Rs in 20's notes: %d \n Rs in 10's notes: %d \n Rs in 5's notes: %d \n Rs in 2's notes: %d \n Rs in 1's notes: %d",note1000,note500,note100,note50,note20,note10,note5,note2,note1);
    
    return 0;
}