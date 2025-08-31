// 0 1 1 2 3 5 8 13 21...........N

#include<stdio.h>
int main()
{
    int first=0;
    int second=1;                        // 0 1 1 2 3 5 8 
    int result=0;
    int k;

    printf("\n Enter a Term ");
    scanf("%d",&k);

    printf("%5d%5d",first,second);

    do
    {
        result=first+second;      
        printf(" %5d",result);


        first=second;          
        second=result;
    } while (result<k);

    return 0;   
}