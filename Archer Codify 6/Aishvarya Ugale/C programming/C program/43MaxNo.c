
    /* WAP to generate the max number using the digits of entered number

        4936  -->  9643
        */

#include<stdio.h>
void main()
{
  int no,i,temp,rev=0;

  printf("Enter Number:\n");
  scanf("%d",&no);
    temp=no;
  for(i=9;i>=0;i--)
  {
      no=temp;
      while(no!=0)
      {
          if(no%10 ==i)
          {
          rev=(rev*10)+(no%10);
          }
          no=no/10;
      }
  }
      printf("Maximum digit : %d",rev);



}
