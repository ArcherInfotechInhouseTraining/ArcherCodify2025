    // Enter any number and count the even digits in that number
#include <stdio.h>

int main()
{
    int n,ecnt=0,ocnt=0;
    printf("\n enter the number");
    scanf("%d",&n);
    for(;n!=0;)
    {
        rem=n%10;
        if(rem==2)
        {
            ecnt++;
        }
        else
        {
            ocnt++
        }
    }
    printf("\n count of even digits=%d",ecnt);
    printf("\ncount of odd digits=%d",ocnt);
    printf("thank you");
    

    return 0;
}
