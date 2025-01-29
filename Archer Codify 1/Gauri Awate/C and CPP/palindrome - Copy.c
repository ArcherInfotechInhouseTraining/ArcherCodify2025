//write a program to check whether the given no is palindrome or not
#include<stdio.h>
#include<stdlib.h>
int main(){
	int no,rem,rev,x;
	printf("Enter any number:");
	scanf("%d",&no);
	x=no;
	for( ;no>0;no=no/10){
		rem=no%10;
		rev=rev*10+rem;
	}
	if(x==rev){
		printf("No is palindrome:%d",x);
	}
	else{
			printf("No is not palindrome:%d",x);
	}
	return 0;
}
