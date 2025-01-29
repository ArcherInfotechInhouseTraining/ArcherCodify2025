// Function call by passing values and by passing reference
	// call by reference

#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)							
{						
	int tmp;				 
	tmp=*a;				    
	*a=*b;					
}
							   
int main()					   
{						
	int x=10,y=12;				
					      		
	printf("\n before x=%d \t y=%d",x,y);
	swap(&x,&y);
	printf("\n After x=%d \t y=%d",x,y);

	return 0;
}
