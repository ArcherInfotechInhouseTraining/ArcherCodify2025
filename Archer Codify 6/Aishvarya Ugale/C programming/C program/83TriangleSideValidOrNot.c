//Write a C program to input all sides of a triangle and check whether triangle is valid
//or not.

#include<stdio.h>
void main()
{
    int a,b,c,ans1,tot;

    printf("Enter a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);



    if(a>b)
    {
        if(a>c)
        {
            ans1=b+c;
            if(ans1>a)
            {
                printf("Triangle is valid\n");
            }
            else{
                printf("triangle is invalid\n");
            }
        }
        else
        {
            ans1=a+b;
            if(ans1>c)
            {
                printf("Triangle is valid\n");
            }
            else{
                printf("triangle is invalid\n");
            }
        }
    }
    else if(b>c)
    {
         ans1=a+c;
            if(ans1>b)
            {
                printf("Triangle is valid\n");
            }
            else{
                printf("triangle is invalid\n");
            }
    }
    else
    {
      ans1=a+b;
            if(ans1>c)
            {
                printf("Triangle is valid\n");
            }
            else{
                printf("triangle is invalid\n");
            }
    }

}

