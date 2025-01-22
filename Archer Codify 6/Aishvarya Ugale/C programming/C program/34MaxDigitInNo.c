 /* WAP To find max digit in a number

        3856 ---> ans: 8
        */

        #include<stdio.h>

        void main()
        {
            int no,max,rem;
            printf("Enter Number:\n");
            scanf("%d",&no);

            for(max=0 ;no!=0; no=no/10)
            {
                rem=no%10;
              if(max<rem)
              {
                  max=rem;
              }

            }
            printf("Maximum Digit : %d",max);

        }
