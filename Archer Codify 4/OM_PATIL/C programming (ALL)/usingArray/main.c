// WAP to input and display the info of 3 books.


#include <stdio.h>
#include <stdlib.h>

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
	    printf("\n Enter the name,isbn no,price and not of student%d:",i+1);
        scanf("%s",bk[i].name);
	    //gets(bk[i].name);
	    //fflush(stdin);
	    //gets(bk[i].name);
	    scanf("%d %f %d",&bk[i].isbn,&bk[i].price,&bk[i].not);
	}

    printf("\n-------BOOK LIST---------\n");
    for(i=0;i<3;i++)
    {
        printf("\n NAME:%s \t ISBN:%d \t PRICE:%0.2f \t NOT:%d",bk[i].name,bk[i].isbn,bk[i].price,bk[i].not);
    }
	return 0;
}

