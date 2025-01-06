#include<stdio.h>

int main(){
    int num;
    printf("Enter Any No:");
    scanf("%d",&num);

    if(num%3==0)
    {
        printf("\n The no is divisible by 3");

        if(num%5==0){
            printf("The No is Divisible By 3 and 5 ");
        }
        else
        {
            printf("\n The no is  Divisible by 3 but not 5");
        }
    
    }
    else if(num%5==0)
    {
        printf("The no is Divisible by 5");
    }
    else{
        printf("The no is not divisible by 3 and 5:");
    }

    return 0;
}