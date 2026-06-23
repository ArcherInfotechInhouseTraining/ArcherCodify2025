/******************************************************************************
                            Structure
******************************************************************************



// Note that it may collect elements of same or different type, and the type may be built-in,
// derived or userdefined.

// init and display of structure variable.

#include <stdio.h>

struct students
{
    char name[50];
    int reg;
    float per;
    int roll;

};

int main()
{
    struct students s1={"om patil",5643,92.17,14261};
    printf("\n name:%s \t reg:%d \tper:%0.2f \troll:%d",s1.name,s1.reg,s1.per,s1.roll);

    return 0;
}



// Input and display.

#include <stdio.h>

struct students
{
    char name[50];
    int reg;
    float per;
    int roll;

};

int main()
{
    struct students s1;
    printf("\n Enter the name,reg no,percentage and roll no of a student:");
    fflush(stdin);
    gets(s1.name);
    scanf("%d%f%d",&s1.reg,&s1.per,&s1.roll);
    printf("\n name:%s \t reg:%d \tper:%0.2f \troll:%d",s1.name,s1.reg,s1.per,s1.roll);

    return 0;
}



// WAP to input and display the information of 2 books.

#include <stdio.h>

struct students
{
    char name[50];
    int reg;
    float per;
    int roll;
};

int main()
{
    struct students s1, s2;
    printf("\n Enter the name,reg no,percentage and roll no of a student:");
    fflush(stdin);
    gets(s1.name);
    scanf("%d%f%d", &s1.reg, &s1.per, &s1.roll);

    printf("\n Enter the name,reg no,percentage and roll no of a student:");
    gets(s2.name);
    gets(s2.name);
    scanf("%d%f%d", &s2.reg, &s2.per, &s2.roll);

    printf("\n name:%s \t reg:%d \tper:%0.2f \troll:%d", s1.name, s1.reg, s1.per, s1.roll);
    printf("\n name:%s \t reg:%d \tper:%0.2f \troll:%d", s2.name, s2.reg, s2.per, s2.roll);

    return 0;
}

// passing structure variable to function.


#include <stdio.h>
#include <stdlib.h>

struct Book
{
	char name[50];
	int isbn;
	float price;
	int not;
};
void display(struct Book*);
void input(struct Book*);
int main()
{
	struct Book b1,b2;

    input(&b1);
    input(&b2);

	printf("\n Book 1:");
    display(&b1);

	printf("\n Book 2:");
    display(&b2);

	return 0;
}
void display(struct Book *b)
{
    printf(" Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",b->name,b->isbn,b->price,b->not);
}
void input(struct Book *b)
{
    printf("\n Enter the name, isbn, price and topics for book : ");

	gets(b->name);
    gets(b->name);

	scanf("%d %f %d",&b->isbn, &b->price, &b->not);
}



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
	    gets(bk[i].name);
	    gets(bk[i].name);
	    scanf("%d%f%d",&bk[i].isbn,&bk[i].price,&bk[i].not);
	}

    printf("\n-------BOOK LIST---------\n");
    for(i=0;i<3;i++)
    {
        printf("\n NAME:%d \t ISBN:%d \t PRICE:%0.2f \t NOT:%d",bk[i].name,bk[i].isbn,bk[i].price,bk[i].not);
    }
	return 0;
}

*/

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
		// fflush(stdin);
		// gets(b[i].name);
		scanf("%s %d %f %d",&b[i].name, &b[i].isbn, &b[i].price, &b[i].not);
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
struct Book* getcopy(struct Book b[3])
{
	int i;
	static struct Book t[3];
	for(i=0;i<3;i++)
	{
		t[i]=b[i];
	}
	return t;
}
int main()
{
    int i;
	static struct Book bk[3];
	struct Book *p;

	input(bk);
    display(bk);

	p=getcopy(bk);
    printf("\n\n copied Book List \n");
	for(i=0;i<3;i++)
	{
		printf("\n Book %d:  Name: %s \t ISBN NO: %d \n Price: %0.2f \t Topics: %d\n",i+1, (p+i)->name,(p+i)->isbn,(p+i)->price,(p+i)->not);
	}
	return 0;
}
