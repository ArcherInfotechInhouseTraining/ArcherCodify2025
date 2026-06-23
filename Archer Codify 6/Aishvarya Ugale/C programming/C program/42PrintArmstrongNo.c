  // WAP to display the list of Armstrong numbers from range 10 - 10000


  #include<stdio.h>
  void main()
  {
      int temp ,no=10,sum,cnt,rem;

      while(no<=10000)
      {
          cnt=0;
          temp=no;
      while(no!=0)
      {
          cnt++;
          no=no/10;
      }
      no=temp;
      sum=0;
      while(no!=0)
      {
       rem=no%10;
        no=no/10;
      int i=0;
      int mul=1;
      while(cnt>i)
      {
          mul=mul*rem;
          i++;
      }
      sum=sum+mul;

      }
      no=temp;
    if(temp==sum)
    {
        printf("%d\n",sum);
    }
    no++;
  }
  }
