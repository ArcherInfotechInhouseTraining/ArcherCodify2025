   // using the switch case within infinite loop (using break to stop)

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
        if(opt==5)
        {
            break; // It will pass the control out of the while() loop
        }


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
            default:
                printf("\n Incorrect Option..!!!");
        }
        printf("\n The Answer Is: %f",ans);
    }

}
