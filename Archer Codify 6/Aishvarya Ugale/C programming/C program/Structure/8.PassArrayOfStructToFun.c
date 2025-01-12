
	// passing the array of structure variable to function

#include <stdio.h>
struct Book
{
	char name[50];
	int isbn;
	float price;
	int not;
};
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
void display(struct Book b[3])
{
    	int i;
    	printf("\n Book List \n");
	for(i=0;i<3;i++)
	{
		printf("\n Book %d:  Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",i+1, b[i].name,b[i].isbn,b[i].price,b[i].not);
	}
}
int main()
{
	struct Book bk[3];
	input(bk);
    	display(bk);

	return 0;
}
