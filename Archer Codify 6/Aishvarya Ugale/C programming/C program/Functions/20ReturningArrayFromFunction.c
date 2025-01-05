
	// returning the array from function

	// returning single element


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
	struct book findmaxprize(struct book b[])
	{
	    int i,pos=1;
	    for(i=1;i<3;i++)
        {
            if(b[i].price>b[pos].price)
            {
                pos=i;
            }
        }
        return b[pos];

	}

	int main()
	{
	    struct book bk[3];
	     struct book t;

	    input(bk);
	    display(bk);
	    t=findmaxprize(bk);
	    printf("Max Price of book :\n");
	     printf("Name:%s \t Isbn no:%d \t Book Price:%f \t No of Topics:%d \n",t.name,t.isbn,t.price,t.not);

	}
