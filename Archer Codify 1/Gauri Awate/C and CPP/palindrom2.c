//write a program to display palindrome number from 1 to 100
#include<stdio.h>
#include<stdlib.h>
int main(){
	int no,rem,rev=0,tmp;
	
    printf("\n list of palindrome nos:");
	for(no=10;no<=1000;no++)
	{
	    rev=0;
	    tmp=no;
	    for( ;no>0;)
	    {
	    	rem=no%10;
	    	rev=(rev*10)+rem;
	    	no=no/10;
	    }  
   
	if(tmp==rev){
	
		printf("%6d",tmp);
	}
		
     //no=tmp;	
	
    }
	
return 0;
}
