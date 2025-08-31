// Write a program to check whether the digit is present or not and count its frequency
#include <stdio.h>
#include<stdlib.h>
int main()
{
  int no, key, cnt = 0, rem, x;
  printf("Enter any no:");
  scanf("%d", &no);
  printf("Enter the key:");
  scanf("%d", &key);
  x = no;
  for (; no > 0; )
  {
    rem = no % 10;
    if (rem == key)
    {
      cnt++;
    }
    no = no / 10;
  }
  if (cnt > 0)
  {
    printf("\n %d is present is in %d: %d times", key, x, cnt);
  }
  else
  {
    printf("\n %d is not present", key);
  }
  return 0;
}
