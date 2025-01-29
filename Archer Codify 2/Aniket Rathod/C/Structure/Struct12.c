// returning the array from function
// returning single element

#include<stdio.h>
#include<stdlib.h>

struct Book
{
    char Name[50];
    int TopicNo;
    int Pages;
    float Price;

};

void input(struct Book bk[3])
{
    int i;
    for (i=0;i<3;i++)
    {
        printf("\n Enter Name, Topic Nos, Pages and Price for Book: %d \n" ,i+1);
        fflush(stdin);
        gets(bk[i].Name);
        scanf("%d %d %f",&bk[i].TopicNo,&bk[i].Pages,&bk[i].Price);
    }
    
}

void display(struct Book bk[3])
{
    int i;
    printf("\n-----List of Books-----\n");
    for(i=0;i<3;i++)
    {
        printf("\n Book Name: %d,\t Topic Nos: %d,\t Pages: %d,\t Price: %0.2f\n",i+1,bk[i].Name,bk[i].TopicNo,bk[i].Pages,bk[i].Price);
    }
}

struct Book getmaxpricebook(struct Book bk[3])
{
    int i,pos=0;
    for(i=0;i<3;i++)
    {
        if(bk[i].Price>bk[pos].Price)
        {
            pos=i;
        }

    }
    return bk[pos];
}


int main()
{
    struct Book bk[5];
    struct  Book mpb;

    input(bk);
    display(bk);

    mpb=getmaxpricebook(bk);
    printf("\n Book with max price:  Name: %s \t Topic Nos: %d \n Pages: %d \t Proce: %0.2f\n", mpb.Name, mpb.TopicNo, mpb.Pages, mpb.Price);

    return 0;
}