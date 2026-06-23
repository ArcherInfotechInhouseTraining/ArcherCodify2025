
	/* access using Pointer notations


	*bk
	 [300] -----> [][][][]... cnt
                    300

	bk:      300
	(bk+i):  address of ith location

	(bk+i)-> xxx   (value at ith location)
	&(bk+i)-> xxx   (Address of ith location)
	*/




#include <stdio.h>
struct Book
{
	char name[50];
	int isbn;
	float price;
	int not;
};
int main()
{
	int cnt,i;
	struct Book *bk;
	printf("\n Enter the Book Count: ");
	scanf("%d",&cnt);

	bk=(struct Book*)malloc(cnt*sizeof(struct Book));
	for(i=0;i<cnt;i++)
	{
		printf("\n Enter the name, isbn, price and topics for book %d \n",i+1);
		fflush(stdin);
		gets((bk+i)->name);
		scanf("%d %f %d",&(bk+i)->isbn, &(bk+i)->price, &(bk+i)->not);
	}

	printf("\n Book List \n");
	for(i=0;i<cnt;i++)
	{
		printf(" Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",(bk+i)->name,(bk+i)->isbn,(bk+i)->price,(bk+i)->not);
	}
	return 0;

}


















