//Write a C program to find frequency of each digit in a given integer

#include<stdio.h>
void main()
{

    int no,i,cnt=0,rem,temp;

    printf("Enter Digit\n");
    scanf("%d",&no);
    temp=no;
     for(i=0;i<10;i++)

    {
        cnt=0;
        no=temp;
      for(;no!=0;no=no/10)
        {
           rem=no%10;
           if(rem==i)
           {
               cnt++;

           }


         }
           if(cnt>0)
           {
               printf("%d Present In %d Times \n",i,cnt);
           }
    }
}
