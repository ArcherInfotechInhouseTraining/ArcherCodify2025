#include<stdio.h>

int main(){
    int no,rem,rev=0;

    printf("Enter any No:"); //1234
    scanf("%d",&no);

    for( ;no!=0; no= no/10 )        // For this for loop we write only Conditional Block :                          
    {                               //  instead of i =0 we should also write in this way
        rem= no%10;  //4,3,2,1
        rev=(rev*10)+rem; //4,43,432,4321
    }
    printf("The Reverse No is %d ",rev);

    return 0;
}

// for(initilization block; conditional block; increment , decrement block);
// in above program we write conditional block , and decrement block;