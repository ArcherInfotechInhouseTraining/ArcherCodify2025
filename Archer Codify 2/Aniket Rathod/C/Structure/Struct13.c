// self referable structure

#include<stdio.h>

struct student
{
    int altno;
    float hsc;
    float cet;
    struct student *next;
};

void main()
{
    struct student *start, *last, *temp;
    int opt;
    start=NULL;

    while(1)
    {
        printf("\n----------Menu------------\n");
        printf("\n 1.Insert \n 2.Display \n 3.Stop \n");
        printf("\n Select your option: ");
        scanf("%d",&opt);
    

        switch (opt)
        {
            case 1:
                temp=(struct student*)malloc(sizeof(struct student));
                printf("\n Enter Student's Allotment No, HSC Percentage & CET Percentate: \n");
                scanf("%d %f %f",&temp->altno,&temp->hsc,&temp->cet);
                temp->next=NULL;

                if(start==NULL)
                {
                    start=temp;
                    last=temp;
                }
                else
                {
                    last->next=temp;
                    last=temp;
                }
                break;

            case 2:
                temp=start;
                while(temp)
                {
                    printf("\n Student's Allotment No: %d,\t HSC Percentage: %0.2f,\t CET Percentage: %0.2f\n",temp->altno,temp->hsc,temp->cet);
                    temp=temp->next;
                }
                break;
    
            case 3:
                exit(0);

            default:
            printf("\n Incorrect Option....!\n");
        }

    }
    
}
