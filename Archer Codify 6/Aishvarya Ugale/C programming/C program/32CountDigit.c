// Enter any no and count digits from it

#include<stdio.h>
void main()
{

    int no,cnt;

    printf("Enter Number:");
    scanf("%d",&no);

    for(cnt=0;no!=0;no=no/10)
    {

        cnt++;

    }
    printf("Digit is :%d",cnt);
}
