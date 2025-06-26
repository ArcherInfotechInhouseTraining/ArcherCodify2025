 // using the switch case within infinite loop (using exit() to stop)

#include<stdio.h>
void main()
{
    int opt,i=0;
    float n1,n2,ans;

    while(1)
    {
        printf("\n --------- Menu -----------\n");
        printf("\n 1.Add \n 2.sub \n 3.multi \n 4.div \n 5.stop");
        printf("\n enter your option: ");
        scanf("%d",&opt);

        i++;
        printf("\n Enter an two nos: ");
        scanf("%f %f",&n1,&n2);

        switch(opt)
        {
            case 1:
                ans=n1+n2;
                break;
            case 2:
                ans=n1-n2;
                break;
            case 3:
                ans=n1*n2;
                break;
            case 4:
                ans=n1/n2;
                break;
            case 5:
                exit(0);
            default:
                printf("\n Incorrect Option..!!!");
        }
        if(opt>=1&&opt<=4)
            printf("\n The Answer Is: %f",ans);
    }

}
