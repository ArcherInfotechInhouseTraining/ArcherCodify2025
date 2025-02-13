// WAP to check the number is palindrome or not
//  121 ---> reverse ---> 121			19291 ---> reverse --> 19291

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,temp,rem,rev;
    
    printf("\n Enter a number sequence: ");
    scanf("%d",&num);
    
    temp=num;
    
    for(rev=0;num!=0;)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    
    if(temp==rev)
        printf("\n Nunber is Palindrome !");
    else
        printf("\n Number is not Palinderome !");
    
    return 0;
}