// WAP to input and display the information of 2 books

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
	struct Book b1,b2;

	printf("\n Enter the name, isbn,price and topics for book 1: ");
	fflush(stdin);
	gets(b1.name);
	scanf("%d %f %d",&b1.isbn, &b1.price, &b1.not);

	printf("\n Enter the name, isbn,price and topics for book 2: ");
	fflush(stdin);
	gets(b2.name);
	scanf("%d %f %d",&b2.isbn, &b2.price, &b2.not);

	printf("\n Book 1: Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",b1.name,b1.isbn,b1.price,b1.not);
	printf("\n Book 2: Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",b2.name,b2.isbn,b2.price,b2.not);

	return 0;
}
