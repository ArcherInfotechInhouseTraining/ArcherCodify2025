// returning array



	#include<stdio.h>

	struct book
	{

	char name[50];
	int isbn;
	float price;
	int not;

	};

	void input (struct book b[3])
	{
	    int i;
	    for(i=0;i<3;i++)
        {
	    printf("Enter Book name :\n");
	    fflush(stdin);
	    gets(b[i].name);
	    printf(" Enter isbn ,Book price,No of Topics:\n");
	    scanf("%d%f%d",&b[i].isbn,&b[i].price,&b[i].not);
        }
	}
	void display(struct book b[])
	{
	    int i;
	    for(i=0;i<3;i++)
        {
            printf("Name:%s \t Isbn no:%d \t Book Price:%f \t No of Topics:%d \n",b[i].name,b[i].isbn,b[i].price,b[i].not);
        }

	}
	struct book * getcopy(struct book b[])//pointer bcz purn array return kraychy
	{
	    int i;
	    struct book cpy[3];
	    for(i=0;i<3;i++)
        {
            cpy[i]=b[i];
        }
        return cpy;
	}
	int main()
	{
	    struct book bk[3];
	     struct book *t;//pointer bcz yat aplyala addrees yenare mhnun

	    input(bk);
	    display(bk);
	   t=getcopy(bk);
	   printf("Name:%s \t Isbn no:%d \t Book Price:%f \t No of Topics:%d \n",t->name,t->isbn,t->price,t->not);
	   //-> aslyavr *ghyaychi garaj nhi padt bcz te point krt jevha pointer used kru structure mdhe  tevha (.) aivaji (->) use kela

	}
