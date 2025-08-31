// access using Pointer notations

#include<stdio.h>

struct Book
{
    char Name[50];
    int TopicNo;
    int Pages;
    float Price;

};

int main()
{
	int cnt,i;
	struct Book *bk;
	printf("\n Enter the Book Count: \n");
	scanf("%d",&cnt);

	bk=(struct Book*)malloc(cnt*sizeof(struct Book));
	for(i=0;i<cnt;i++)
	{
		printf("\n Enter the Book Name, Topic Nos, Pages and Price for book %d \n",i+1);
		fflush(stdin);
		gets((bk+i)->Name);
		scanf("%d %d %f",&(bk+i)->TopicNo, &(bk+i)->Pages, &(bk+i)->Price);
	}

	printf("\n ----------Book List-------- \n");
	for(i=0;i<cnt;i++)
	{
		printf("\n Name: %s ,\t Topic Nos: %d ,\t Pages: %d ,\t Price: %0.2f \n",(bk+i)->Name,(bk+i)->TopicNo,(bk+i)->Pages,(bk+i)->Price);
	}
	return 0;

}