/* WAP to find the rep of each digit 188311  --> - 1 rep 3 times
						 - 8 rep 2 times

						 */

    #include<stdio.h>
    void main()
    {

        int no,rem,cnt,i,temp;
        printf("Enter Number :\n");
        scanf("%d",&no);
        temp=no;
        for(i=0;i<10;i++)
        {
            no=temp;
            cnt=0;
            while(no!=0)
            {
                rem=no%10;
                no=no/10;
                if(rem==i)
                {
                    cnt++;
                }

            }
            if(cnt>0)
            {

             printf("%d Number is Present in %d Times\n",i,cnt);
            }
        }
    }
