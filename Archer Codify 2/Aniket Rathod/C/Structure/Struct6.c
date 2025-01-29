// Note that any variable, it may be variable of structure, passed by value to function
	// so in above case, for input, either we have to return book info or we need to pass by ref.

	// above program with return

#include <stdio.h>

struct Book
{
	char name[50];
	int isbn;
	float price;
	int not;
};

void display(struct Book);
struct Book input(struct Book);

int main()
{
	struct Book b1,b2;

    b1=input(b1);
    b2=input(b2);

	printf("\n Book 1:");
    display(b1);

	printf("\n Book 2:");
    display(b2);

	return 0;
}

void display(struct Book b)
{
    printf(" Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",b.name,b.isbn,b.price,b.not);
}

struct Book input(struct Book b)
{
    printf("\n Enter the name, isbn, price and topics for book : ");
	fflush(stdin);
	gets(b.name);
	scanf("%d %f %d",&b.isbn, &b.price, &b.not);
	return b;
}
