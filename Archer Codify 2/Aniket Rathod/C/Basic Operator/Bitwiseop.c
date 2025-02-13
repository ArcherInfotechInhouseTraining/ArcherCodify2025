// bitwise Operator :


#include<stdio.h>
#include<conio.h>

int main(){
    
    int t,w,a,b;
    
    printf("\n Enter values for t and w: ");
    scanf("%d %d",&t,&w);
    
    a=(t&w);
    printf("\n for (t&w): %d",a);
    printf("\n for (t<<2) : %d",(t<<2));
    printf("\n for (w>>2): %d",(w>>2));
    
    b=(t|w);
    printf("\n for (t|b): %d",b);
    printf("\n (t|w): %d",(t|w));
    printf("\n (t^w): %d",(t^w));
    
    return 0;   
}

