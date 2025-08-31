#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
int main()
{
	struct Node *start, *last, *tmp, *t;
	int i, opt,cnt=0,pos, val;
	start=NULL;
	while(1)
	{
		printf("\n ======= Menu ======== \n");
		printf("\n 1.insert \n 2.delete \n 3.display \n 4.stop");

		printf("\n select your option: ");
		scanf("%d",&opt);
		switch(opt)
		{
		case 1:
			tmp=(struct Node*)malloc(sizeof(struct Node));

			printf("\n ---- Sub-Menu ----\n");
			printf("\n 1. insert From Start \n 2.From Last \n 3.From Position \n 4.using Value");
			printf("\n select option: ");
			scanf("%d",&opt);
			printf("\n Enter the Data: ");
			scanf("%d",&tmp->data);
			if(opt==1)
			{

				{
					tmp->next=NULL;
					if(start==NULL)
					{
						start=tmp;
						last=tmp;
					}
					else
					{
						last->next=tmp;
						last=tmp;
					}
					cnt++;
				}
			}

			else if(opt==2)
			{
				tmp=start;
				while(tmp->next=last)
				{
				    tmp=tmp->next;
				}
					tmp->next=last->next;
					 last=NULL;
				
				
				cnt++;


			}
		

		break;
	case 2:
		printf("\n ---- Sub-Menu ----\n");
		printf("\n 1.Delete From Start \n 2.From Last \n 3.From Position \n 4.using Value");
		printf("\n select option: ");
		scanf("%d",&opt);
		if(opt==1)
		{
			tmp=start;
			start=tmp->next; // start=start->next;
			free(tmp);
			cnt--;
		}
		else if(opt==2)
		{
			tmp=start;
			while(tmp->next!=last)
			{
				tmp=tmp->next;
			}
			tmp->next=NULL;
			free(last);
			last=tmp;

			cnt--;
		}
		else if(opt==3)
		{
			printf("\n Enter the Node Position: ");
			scanf("%d",&pos);
			if(pos>cnt)
			{
				printf("\n Improper Position");
			}
			else
			{
				if(pos==1)
				{
					tmp=start;
					start=tmp->next; // start=start->next;
					free(tmp);
				}
				else if(pos==cnt)
				{
					tmp=start;
					while(tmp->next!=last)
					{
						tmp=tmp->next;
					}
					tmp->next=NULL;
					free(last);
					last=tmp;
				}
				else
				{
					tmp=start;
					i=1;
					while(i<(pos-1))
					{
						tmp=tmp->next;
						i++;
					}
					t=tmp->next;
					tmp->next=t->next;
					free(t);
				}
			}
			cnt--;
		}
		else if(opt==4)
		{
			printf("\n Enter the value: ");
			scanf("%d",&val);
			if(start->data==val)
			{
				tmp=start;
				start=tmp->next; // start=start->next;
				free(tmp);
			}
			else if(last->data==val)
			{
				tmp=start;
				while(tmp->next!=last)
				{
					tmp=tmp->next;
				}
				tmp->next=NULL;
				free(last);
				last=tmp;
			}
			else
			{
				tmp=start;
				while(tmp->data!=val)
				{
					t=tmp;
					tmp=tmp->next;
				}
				t->next=tmp->next;
				free(tmp);
			}
			cnt--;
		}
		else
		{
			printf("\n Incorrect Option: ");
		}
		break;
	case 3:
		printf("\n Node Count: %d\n",cnt);
		tmp=start;
		while(tmp)
		{
			printf("%7d",tmp->data);
			tmp=tmp->next;
		}
		break;
	case 4:
		exit(0);
	default:
		printf("\n Incorrect Option...!!!");
	}
	}

	return 0;
}






