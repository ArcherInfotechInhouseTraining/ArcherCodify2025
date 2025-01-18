#include<stdio.h>
void main()
 {
     int x=24,y=10,z;


     z=(x&y);
     printf("\n (x&y) is %d", z);//And operator
     printf("\n (x|y) is %d", (x|y));//OR operator
     printf("\n (x^y) is %d", (x^y));//XOR operator

     printf("\n (x<<2) is %d", (x<<2));//left shift operator
     printf("\n (y>>2) is %d", (y>>2));//right shift operator


 }
