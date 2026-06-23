/* WAP to convert the temp from F to Deg.

    formula: (°F ? 32) / 1.8 = °C 
	
	Example: (0°C × 9/5) + 32 = 32°F

*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	float celc,fer;
	
	printf("\n Enter the Fer: ");
	scanf("%f",&fer);
	
	celc = (fer -32)/1.8;
	printf("\n Cel is : %f",celc);
	
	return 0;
}
