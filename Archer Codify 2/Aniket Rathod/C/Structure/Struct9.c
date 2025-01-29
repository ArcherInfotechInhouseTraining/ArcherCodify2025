// WAP to input and display the info of 3 books

#include<stdio.h>

struct Book
{
    char Name[50];
    int TopicNo;
    int Pages;
    int Price;

};

int main()
{
    struct Book bk[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("\n Enter the Name, Topic No's, Pages, Price: %d \n",i+1);
        fflush(stdin);
        gets(bk[i].Name);
        scanf("%d %d %d",&bk[i].TopicNo,&bk[i].Pages,&bk[i].Price);
    }

    printf("\n--List Of Books--\n");
    for(i=0;i<3;i++)
    {
        printf("\n Name: %s, \t Topic No's: %d, \t Pages: %d, \t Price: %d \n",bk[i].Name,bk[i].TopicNo,bk[i].Pages,bk[i].Price);
    }

    return 0;
}