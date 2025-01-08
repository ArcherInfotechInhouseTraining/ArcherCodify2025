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
	struct student *start, *last, *tmp;
	int opt;
	start=NULL;
	while(1)
	{
		printf("\n ---------- Menu ----------\n");
		printf("\n 1.Insert \n 2.Display \n 3.Stop");
		printf("\n Select your option: ");
		scanf("%d",&opt);

		switch(opt)
		{
			case 1:
				tmp=(struct student*)malloc(sizeof(struct student));
				printf("\n Enter the alt no, hsc percentage and cet marks of student: ");
				scanf("%d %f %f",&tmp->altno,&tmp->hsc,&tmp->cet);
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
				break;
			case 2:
				tmp=start;
				while(tmp)
				{
					printf("\n Alt No: %d \t HSC Marks: %0.2f \t CET Marks: %0.2f",tmp->altno,tmp->hsc,tmp->cet);
					tmp=tmp->next;
				}
				break;
			case 3:
				exit(0);
			default:
				printf("\n Incorrect Option...!!!");
		}

	}
}
