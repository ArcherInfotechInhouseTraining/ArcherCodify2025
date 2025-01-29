//write a program to display the even count,odd count, even sum,odd sum from the number entered by user
#include<stdio.h>
#include<conio.h>
int main(){
	int no,evenSum=0,oddSum=0,evenCount=0,oddCount=0,rem=0;
	printf("\nEnter any number:");
	scanf("%d",&no);
	for( ;no>0; ){
		rem=no%10;
		no=no/10;
		if(rem%2==0){
			evenCount++;
			evenSum=evenSum+rem;
		}
		else{
				oddCount++;
			oddSum=oddSum+rem;
		}
	}
	printf("\nEven digit count:%d",evenCount);
	printf("\nEven digit sum:%d",evenSum);
	printf("\nOdd digit count:%d",oddCount);
	printf("\nOdd digit sum:%d",oddSum);
	return 0;
}
