/* Array of structure variables

	bk  0    1    2   3    4
	  [  ] [  ] [  ] [  ] [  ]

	here individual location is variable of Book Type, so we have to access location as

		- bk[i].xxx  for value
		- &bk[i].xxx for address
*/

	// WAP to input and display the info of 3 books

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
	struct Book bk[3];
	int i;

	for(i=0;i<3;i++)
	{
		printf("\n Enter the name, isbn, price and topics for book %d \n",i+1);
		gets(bk[i].name);
		scanf("%d %f %d",&bk[i].isbn, &bk[i].price, &bk[i].not);
	}

	printf("\n Book List \n");
	for(i=0;i<3;i++)
	{
		printf(" Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",bk[i].name,bk[i].isbn,bk[i].price,bk[i].not);
	}
	return 0;
}
