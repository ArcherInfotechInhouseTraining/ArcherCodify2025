  /* WAP to find the entered number is Armstrong or not

    153=(1^3)+(5^3)+(3^3)=153;  153==153(is a armstrong number;
    */

    #include<stdio.h>
    void main()
    {

       int no,temp,cnt=0,rem,mul,sum=0;

       printf("Enter Number:\n");
       scanf("%d",&no);

       temp=no;

       while(no!=0)
       {
           cnt++;
           no=no/10;
       }
       printf("Digit count :%d\n",cnt);
       no=temp;
       while(no!=0)
       {
           rem=no%10;
           no=no/10;

           int i=0;
           mul=1;
           while(cnt>i)
           {
               mul=mul*rem;
               i++;
           }
           sum=sum+mul;


       }
       printf("Ans:%d\n",sum);

       if(temp==sum)
       {
           printf("    !!!! Number is Armstrong !!!!\n");
       }
       else
       {
           printf("    !!! Number is not Armstrong !!!\n");
       }


    }
