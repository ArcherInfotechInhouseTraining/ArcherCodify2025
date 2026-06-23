// 	Using Nesting of if() else:
/* WAP to find the entered number is even or odd,
	- when no is even and greater than 10 then add 5 in it otherwise multi. by 3
	- when no is odd and greater than 20 then  div it by 3 otherwise add 100 in it. 
*/


#include<stdio.h>
#include<conio.h>

int main(){
    
    int no;
    float ans;
    printf("\n Enter a no: ");
    scanf("%d",&no);
    
    if(no%2==0)
    {
        if(no>10)
        {
            ans=no+5;
            printf("\n no is greater than 10, adding 5 into it");
        }
        else
        {
            ans=no*3;
            printf("\n no is smaller than 10, multiplying 3 into it");
        }
        
        
    }
    
    else
    
    {
       printf("\n No is odd: %d ",no);
       if(no>20)
       {
           ans=no/3;
           printf("\n no is Grater than 20, dividing it by 3");
       }
       
       else
       {
           ans=no+100;
           printf("\n no is Smaller than 20, adding 100 into it");
       }
       
       
       
    }
    printf("\n Ans is : %f",ans);


    return 0;   
}

