 // using the switch case within loop
 #include<stdio.h>
 void main()
{
    int opt,i=0;
    float n1,n2,ans;

    while(i<3)
    {
        printf("\n --------- Menu -----------\n");
        printf("\n 1.Add \n 2.sub \n 3.multi \n 4.div");
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
            default:
                printf("\n Incorrect Option..!!!");
        }
        printf("\n The Answer Is: %f",ans);
    }

}
