// palindrome check using function

#include<stdio.h>
int palindrome(int);
void main()
{
    int no,ans;
    printf("Enter Number\n");
    scanf("%d",&no);

    ans=palindrome(no);
    if(ans==no)
    {
        printf("Number is Palindrome !!\n");
    }
    else{
         printf("Number is Not Palindrome !!\n");
    }

}
int palindrome(int no)
{
    int rev=0;
    while(no!=0)
    {
    rev=(rev*10)+(no%10);
    no=no/10;
    }
    return rev;
}

