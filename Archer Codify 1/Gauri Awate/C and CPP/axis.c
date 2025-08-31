//Enter the coordinates of a point in 2D system and display the exact location of that point
#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y;
	printf("\nEnter the x and y coordinate of a system:");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0){
		printf("Ist quadrant");
	}
	else if(x<0 && y>0){
		printf("IIst quadrant");
	}
	else if(x<0 && y<0){
		printf("IIIst quadrant");
	}	
	else if(x>0 && y<0){
		printf("IVst quadrant");
	}	
	else if(x==0 && y!=0){
		printf("y axis");
	}	
	else if(y==0 && x!=0){
		printf("x axis");
	}
	else{
		printf("@Origin");
	}
return 0;
}
