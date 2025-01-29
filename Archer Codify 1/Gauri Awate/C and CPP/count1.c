//write a program to display digit sum of all digit of a given number
#include<stdio.h>
#include<stdlib.h>
int main(){
	int no,rem=0,cnt=0;
	printf("\nEnter the number:");
	scanf("%d",&no);
	for( ;no>0; ){
		
		no=no/10;
		cnt++;
	}
	printf("\n Count of digit is:%d",cnt);
	return 0;
}
