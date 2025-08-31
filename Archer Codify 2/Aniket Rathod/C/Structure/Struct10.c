// passing the array of structure variable to function

#include<stdio.h>

struct Book
{
    char Name[50];
    int TopicNo;
    int Pages;
    float Price;

};

void input(struct Book b[3])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\n Enter Name, Topic No, Page, Price for Book: %d \n",i+1);
        fflush(stdin);
        gets(b[i].Name);
        scanf("%d %d %f",&b[i].TopicNo,&b[i].Pages,&b[i].Price);
    }
}

void display(struct Book b[3])
{
    	int i;
    	printf("\n --Book List-- \n");
	for(i=0;i<3;i++)
	{
		printf("\n Book %d:  Name: %s \t Topic No: %d \n Pages:  %d \t Price: %0.2f \n",i+1, b[i].Name,b[i].TopicNo,b[i].Pages,b[i].Price);
	}
}

int main()
{
    struct Book bk[3];
    input(bk);
    display(bk);

    return 0; 
}

