// WAP to find the missing digits from the number   3951  --> list of missing digits: 0 2 4 6 7 8

#include<stdio.h>
void main()
{
    int no,rem ,i,flag,temp;
    printf("Enter Numbers :\n");
    scanf("%d",&no);
    temp=no;
      for( i=0; i<10; i++)
    {
        no=temp;
        flag=0;
       while(no!=0)
        {
       rem=no%10;
        no=no/10;
        if (rem==i)
        {
            flag=1;
            break;
        }
        }

        if(flag==0)
        {
            printf("Missing Values :%d\n",i);
        }




    }
}
