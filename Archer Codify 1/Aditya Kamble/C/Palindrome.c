#include<stdio.h>

int main()
{
    int no, rem, org_no,rev=0;

    
   
    printf(" \n List of Palindrome no:");
    

    for(no=10 ; no<=100 ; no++)
    {
        rev=0;
        org_no=no;
        
       for( ; no!=0; no=no/10)
       {
            rem=no%10;
            rev=(rev*10)+rem;
       }
       if(org_no==rev)
            printf("%6d",org_no);

         no=org_no;
    }   

       return 0;
}