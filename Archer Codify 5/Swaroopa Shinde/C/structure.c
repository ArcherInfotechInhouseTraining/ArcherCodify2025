/*struct color
{
    int r;
    int g;
    int b;
};
int main()
{
    struct color c1={11,22,33};
    printf("The RGB color is:%d %d %d",c1.r,c1.g,c1.b);
    return 0;
}
*/

//==========================================================================================

// init and display of structure variable
/*
struct student
{
    char nm[50];
    int rgno;
    int rno;
    int age;
    char gen;
};
int main()
{
    struct student s1={"Swarupa",1234,12,22,'M'};
    printf("\n %s Name \n %d rgno \n %d rno \n %d age \n %c gen",s1.nm,s1.rgno,s1.rno,s1.age,s1.gen);
    return 0;
}
*/

//=====================================================================================

// input and display
/*
#include<stdio.h>
struct book
{
    char nm[50];
    int isbn;
    int nt;
    float price;
};
int main()
{
    struct book b1,b2;
    printf("\n for Book 1:");
    printf("\n Enter the name of the book:");
    gets(b1.nm);
    printf("\n Enter the isbn number of book:");
    scanf("%d",&b1.isbn);
    printf("\n Enter the number of topic of book:");
    scanf("%d",&b1.nt);
    printf("\n Enter the price of book:");
    scanf("%0.2f",&b1.price);

    printf("\n for Book 2:");
    printf("\n Enter the name of the book:");
    fflush(stdin);
    gets(b2.nm);
    printf("\n Enter the isbn number of book:");
    scanf("%d",&b2.isbn);
    printf("\n Enter the number of topic of book:");
    scanf("%d",&b2.nt);
    printf("\n Enter the price of book:");
    scanf("%0.2f",&b2.price);
    printf("\n %s name of book,\n %d isbn number,\n %d topic of book,\n %0.2f price of book",b1.nm,b1.isbn,b1.nt,b1.price);
    printf("\n %s name of book,\n %d isbn number,\n %d topic of book,\n %0.2f price of book",b2.nm,b2.isbn,b2.nt,b2.price);
    return 0;

}
*/

//===========================================================================================================

// passing structure variable to function
/*
#include<stdio.h>
struct book
{
    char nm[50];
    int isbn;
    int nt;
    float price;
};
void display(struct book)
int main()
{
    struct book b1,b2;
    //printf("\n for Book 1:");
    printf("\n Enter the name of the book:");
    gets(b1.nm);
    printf("\n Enter the isbn number of book:");
    scanf("%d",&b1.isbn);
    printf("\n Enter the number of topic of book:");
    scanf("%d",&b1.nt);
    printf("\n Enter the price of book:");
    scanf("%0.2f",&b1.price);

    //printf("\n for Book 2:");
    printf("\n Enter the name of the book:");
    fflush(stdin);
    gets(b2.nm);
    printf("\n Enter the isbn number of book:");
    scanf("%d",&b2.isbn);
    printf("\n Enter the number of topic of book:");
    scanf("%d",&b2.nt);
    printf("\n Enter the price of book:");
    scanf("%0.2f",&b2.price);

    printf("\n Book 1:");
    display(b1);

    printf("\n Book 2:");
    display(b2);

    return 0;
}
void display(struct book b)
{
    printf("%s name,%d isbn,%d topic,%0.2f price",b.nm,b.isbn,b.nt,b.price);
}
*/

//===========================================================================================

// above program with return
/*
#include<stdio.h>
struct book
{

	char name[50];
	int isbn;
	float price;
	int not;
};
void display(struct book)
struct book input(struct book)
int main()
struct book b1,b2;
{
    b1=input(b1);
    b2=input(b2);
    printf("\n Book 1:");
    display(b1);
    printf("\n Book 2:");
    display(b2);
    return 0;
};
void display(struct book)
{
     printf(" Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",b.name,b.isbn,b.price,b.not);
}
}
struct book input(struct book b)
{
    printf("\n Enter the name, isbn, price and topics for book : ");
	fflush(stdin);
	gets(b.name);
	scanf("%d %f %d",&b.isbn, &b.price, &b.not);
	return b;
}
};
*/

//============================================================================================

// Array of structure variables
/*
#include<stdio.h>
struct book
{
    char name[50];
	int isbn;
	float price;
	int not;
};
int main()
{
    struct book bk[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("\n Enter the name, isbn, price and topics for book %d \n",i+1);
		gets(bk[i].name);
		scanf("%d %f %d",&bk[i].isbn, &bk[i].price, &bk[i].not);
	}

    printf("\n Book list:");
    for(i=0;i<3;i++)
    {
        printf("%s name,%d isbn,%f price %d topic",bk[i].name,bk[i].isbn,bk[i].price,bk[i].not);
    }
    return 0;
}
*/

//==============================================================================================================
/*
#include<stdio.h>
struct Book
{
    char name[50];
    int isbn;
    float price;
    int not;
};
void input(struct book[3])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the name isbn price not",i+1);
        fflush(stdin);
        gets(b[i].name);
        scanf("%d %f %d",&b[i].isbn, &b[i].price, &b[i].not);
    }
}
void display(struct book[3])
{
    int i;
    printf("\n Book List");
    for(i=0;i<3;i++)
    {
        printf("\n Book %d:  Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",i+1, b[i].name,b[i].isbn,b[i].price,b[i].not);
	}
}
struct book getmaxpricebook(struct book[])
{
    int i,pos=0;
    for(i=0;i<3;i++)
    {
        for(b[i].price>b[pos].price)
        {
            pos=i;
        }
    }
};
*/

//====================================================================
