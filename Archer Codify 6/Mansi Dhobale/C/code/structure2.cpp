/* #include <stdio.h>
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

	printf("\n  for Book 1:");
    display(b1);

	printf("\n for Book 2:");
    display(b2);

	return 0;
}
void display(struct Book b)
{
    printf(" Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",b.name,b.isbn,b.price,b.not);
} for
struct Book input(struct Book b)
{
    printf("\n Enter the name, isbn, price and topics for book : ");
	fflush(stdin);
	gets(b.name);
	scanf("%d %f %d",&b.isbn, &b.price, &b.not);
	return b;
} */



//Using pointer to structure variable

/* #include<stdio.h>
struct book{
    char bkn[40];
    int isbnno;
    float price;
};
void input(struct book *b);
void output(struct book *b);
void input(struct book  *b)
{
   printf("\n enter the book name,isbn,price:");
   fflush(stdin);
   scanf("%s",&b->bkn);
   scanf("%d %f",&b->isbnno,&b->price);
}

void output(struct book *b)
{
       printf("book name:%s \t isbnno: %d  \t bookprice: %f",b->bkn,b->isbnno,b->price);
}
 int main()
 {
     struct book b1,b2;
     printf("\n book 1:");
     input(&b1);
     output(&b1);
     printf("\n for book 2:");
     input(&b2);
     output(&b2);
     return 0;
 }*/


//aray  structure
#include<stdio.h>
struct book {
	char bkn[40];
	int isbnno;
	float price;
};

int main() 
	{
		struct book b[3];
		int i;
		for(i=0; i<3; i++) {
			printf("\n enter the book name,isbn,price:");
			scanf("%s",b[i].bkn);
			scanf("%d %f",&b[i].isbnno,&b[i].price);
		}

		for(i=0; i<3; i++) {

			printf("book name:%s \t isbnno: %d  \t bookprice: %f",b[i].bkn,b[i].isbnno,b[i].price);
		}
		return 0;
	}
