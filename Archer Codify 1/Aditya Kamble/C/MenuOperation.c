#include<stdio.h>

int main()
{
    int a,b,ans=0;
    int opt;

    printf("\n 1.Add \n 2.Sub \n 3.Mul \n 4.Div");
    printf("\n Enter a Choice:");
    scanf("%d",&opt);
    printf("\n Enter a Values of a and b :");
    scanf("%d%d",&a,&b);

    do
    {
        if(opt==1)
        {
            printf("%d",ans=a+b);
            break;
        }
        else if(opt==2)
        {
            printf("%d",ans=a-b);
            break;
        }
        else if(opt==3)
        {
            printf("%d",ans=a*b);
            break;
        }
        else if(opt==4)
        {
            printf("%d",ans=a/b);
            break;
        }
        else
        {
            printf("\n Invalid option:");
            break;
        }
    } while (opt>0);
    return 0;
    
}