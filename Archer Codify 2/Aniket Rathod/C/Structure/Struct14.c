// Implementing (insert-HW) and Delete Operations

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void main()
{
    struct Node *start, *temp, *last, *tp;
    int i, opt, pos, val, cnt=0;

    start=NULL;
    while(1)
    {
        printf("\n --------------Menu----------------\n");
        printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Stop \n");

        printf("\n Select your Option: ");
        scanf("%d",&opt);

        switch (opt)
        {
            case 1:
                temp=(struct Node*)malloc(sizeof(struct Node));
                printf("\n Enter the Data: ");
                scanf("%d",&temp->data);
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
                cnt++;
                break;

            case 2:
                printf("\n-----------Sub-Menu-------------\n");
                printf("\n 1.Delete From Start \n 2.Delete From Last \n 3.Delete Using Position \n 4.Delete Using Value \n");
                printf("\n Select Option: ");
                scanf("%d",&opt);

                if(opt==1)
                {
                    temp=start;
                    start=temp->next;
                    free(temp);
                    cnt--;
                }

                else if(opt==2)
                {
                    temp=start;
                    while(temp->next!=last)
                    {
                        temp=temp->next;
                    }
                    temp->next=NULL;
                    free(last);
                    cnt--;
                }

                else if(opt=3)
                {
                    printf("\n Enter the Node Position: ");
                    scanf("%d",&pos);

                    if(pos>cnt)
                    {
                        printf("\n Improper Position..!");
                    }
                    else
                    {
                        if(opt==1)
                        {
                            temp=start;
                            start=temp->next;
                            free(temp);
                        }
                        else if(pos==cnt)
                        {
                            temp=start;
                            while(temp->next!=last)
                            {
                                temp=temp->next;
                            }
                            temp->next=NULL;
                            free(last);
                            last=temp;
                        }
                        else
                        {
                            temp=start;
                            i=1;
                            while(i<(pos-1))
                            {
                                temp=temp->next;
                                i++;
                            }
                            tp=temp->next;
                            temp->next=tp->next;
                            free(tp);
                        }
                    }
                    cnt--;
                }
                else if(opt==4)
                {
                    printf("\n Enter the Value: ");
                    scanf("%d",&val);

                    if(start->data==val)
                    {
                        temp=start;
                        start=temp->next;
                        free(temp);
                    }

                    else if(last->data==val)
                    {
                        temp=start;
                        while (temp->next!=last)
                        {
                            temp=temp->next;
                        }
                        temp->next=NULL;
                        free(last);
                        last=temp;
                    }
                    else
                    {
                        temp=start;
                        while (temp->data!=val)
                        {
                            tp=temp;
                            temp=temp->next;
                        }
                        tp->next=temp->next;
                        free(temp);
                    }
                    cnt--;
                }
                else
                {
                    printf("\n Incorrect Option..!");
                }
                break;
                
            case 3:
                printf("\n Node Coutn: %d :",cnt);
                temp=start;

                while(temp)
                {
                    printf("%10d",temp->data);
                    temp=temp->next;
                }
                break;

            case 4:
                exit(0);
                    
            default:
                printf("\n Invalid Input...!\n");
                break;
        }
    } 
       
}