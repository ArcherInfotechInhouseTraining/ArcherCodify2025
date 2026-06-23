//write a program using function to reverse entered number - int findreverse(int);


#include<stdio.h>
int findreverse(int);
void main()
{
    int no,ans;
    printf("Enter Number\n");
    scanf("%d",&no);

    ans=findreverse(no);
    printf("Reverse no: %d",ans);
}
int findreverse(int no)
{
    int rev=0;
    while(no!=0)
    {
    rev=(rev*10)+(no%10);
    no=no/10;
    }
    return rev;
}
