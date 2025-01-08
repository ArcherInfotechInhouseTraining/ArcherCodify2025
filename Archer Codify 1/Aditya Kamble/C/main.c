// WAP to Find Out the Max 3nos

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter a any no:");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("The Maximum no is %d ",c);
        }
        else
        {
            printf("The maximum no is %d ",a);
        }
    }
    else if(a<b)
    {
        printf("The maximum no is %d",b);
    }
    else{
        printf("The maximum no is %d",a);
    }

    return 0;
}
