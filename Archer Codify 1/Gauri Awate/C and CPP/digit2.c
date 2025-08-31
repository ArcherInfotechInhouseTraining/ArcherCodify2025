// Write a program to check whether the digit is present or not and count its frequency
#include <stdio.h>
#include<stdlib.h>
int main()
{
  int no, i, cnt = 0, rem, x;
  printf("Enter any no:");
  scanf("%d",&no);
  x = no;
  for(i=0;i<10;i++){
  
  for (; no > 0; )
  {
    rem = no % 10;
    if (rem == i)
    {
      cnt++;
    }
    no = no / 10;
  }
}
  if (cnt > 0)
  {
    printf("\n %d is present is in %d: %d times", i, x, cnt);
  }
  
  return 0;
}
