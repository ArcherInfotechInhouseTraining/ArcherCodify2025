
	// returning pointer


#include <stdio.h>
#include<stdlib.h>

struct Book
{
	char name[50];
	int isbn;
	float price;
	int not;
};
int cnt=0;
void input(struct Book b[3])
{
    int i;
	for(i=0;i<3;i++)
	{
		printf("\n Enter the name, isbn, price and topics for book %d \n",i+1);
		fflush(stdin);
		gets(b[i].name);
		scanf("%d %f %d",&b[i].isbn, &b[i].price, &b[i].not);
	}
}
void display( struct Book b[3])
{
    int i;
    printf("\n Book List \n");
	for(i=0;i<3;i++)
	{
		printf("\n Book %d:  Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",i+1, b[i].name,b[i].isbn,b[i].price,b[i].not);
	}
}
struct Book* getprocemaxthan100(struct Book b[3])
{
	int i,j;
	static struct Book *t;
    for(i=0;i<3;i++)
    {
        if(b[i].price>100)
            cnt++;
    }
    t=(struct Book*)malloc(cnt*sizeof(struct Book));
	for(i=0,j=0;i<3;i++)
	{
	    if(b[i].price>100)
            t[j++]=b[i];
	}
	return t;
}
int main()
{
    int i;
	struct Book bk[3];
	struct Book *p;

	input(bk);
    display(bk);

	p=getprocemaxthan100(bk);
    printf("\n\n Book List having price greater than 100 \n");
	for(i=0;i<cnt;i++)
	{
		printf("\n Book %d:  Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",i+1, (p+i)->name,(p+i)->isbn,(p+i)->price,(p+i)->not);
	}
	return 0;
}
