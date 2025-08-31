//Enter any no.through keyboard and find it is divisible by 3 or 5 or both
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	printf("\n Enter the value of a:");
	scanf("%d",&a);
	if(a%3==0){
		if(a%5==0){
			printf("\n No is divisible by both");
		}
		else{
			printf("\n No is divisible by 3");
		}
	}
	else{
		if(a%5==0){
			printf("\n No is divisible by 5");
		}
		else{
			printf("\n No is not divisible by both");
		}
	}
	return 0;
	
}
