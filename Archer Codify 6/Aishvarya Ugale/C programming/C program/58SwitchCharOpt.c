// using char as a option in the switch case
#include<stdio.h>
void main()
{
    char opt;
    float n1,n2,ans;

    printf("\n --------- Menu -----------\n");
    printf("\n a.Add \n b.sub \n c.multi \n d.div");
    printf("\n enter your option: ");
    scanf("%c",&opt);

    printf("\n Enter an two nos: ");
    scanf("%f %f",&n1,&n2);

    switch(opt)
    {
        case 'a':
        case 'A':
            ans=n1+n2;
            break;
        case 'b':
        case 'B':
            ans=n1-n2;
            break;
        case 'c':
        case 'C':
            ans=n1*n2;
            break;
        case 'd':
        case 'D':
            ans=n1/n2;
            break;
        default:
            printf("\n Incorrect Option..!!!");
            return;
    }
    printf("\n The Answer Is: %f",ans);

}

