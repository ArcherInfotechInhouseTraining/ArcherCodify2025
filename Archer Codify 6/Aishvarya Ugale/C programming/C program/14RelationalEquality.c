//0=false
//1=true

#include<stdio.h>
void main()
{

    int x=4,y=12,ans;

    ans=(x>y);
    printf("%d\n",ans);//0

     ans=(x<y);
    printf("%d\n",ans);//1

     ans=(x==y);
    printf("%d\n",ans);//0

     ans=(x!=y);
    printf("%d\n",ans);//1

     ans=(x%2==0);
    printf("%d\n",ans);//1
}
