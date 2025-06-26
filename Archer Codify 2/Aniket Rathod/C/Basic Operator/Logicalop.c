#include<stdio.h>
#include<conio.h>

int main()
{
    int p,q,r,ans;
    
    printf("\n Enter values for P, Q and R : ");
    scanf("%d %d %d",&p,&q,&r);
    
    ans=(p>q && r>p);
    printf("\n Ans of (p>q && r>p) : %d",ans);
    
    ans=(r=p || q>p);
    printf("\n Ans of (r=p || q>p) is : %d",ans);
    
    ans=(p!=q && r<100);
    printf("\n Ans of (p!=q && r<100) is : %d ",ans);

	return 0;
}

