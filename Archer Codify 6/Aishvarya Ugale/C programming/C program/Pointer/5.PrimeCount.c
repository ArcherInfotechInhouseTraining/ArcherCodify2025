// Enter N Number and find the prime count.
#include<stdio.h>
void main()
{
    int *p,no,pcnt,flg=0,i,d;

    printf("Enter How many Elements u Want\n");
    scanf("%d",&no);

    p=(int*)malloc(no*sizeof(int));
    printf("Enter %d Elements:",no);
    for(i=0;i<no;i++)
    {
        scanf("%d",p+i);
    }
    printf("Elements is:\n");
     for(i=0;i<no;i++)
    {
        printf("%d",*(p+i));
    }

  for(i=0;i<no;i++)
    {
        flg=0;
        d=2;
        while(d<=(*(p+i)/2))
        {
            if((*p+i)%d==0)
            {
             flg=1;
            }

               d++;

        }
         if(flg==0)
             {
               pcnt++;
             }


    }

  printf("\nPrime count is %d",pcnt);
}
