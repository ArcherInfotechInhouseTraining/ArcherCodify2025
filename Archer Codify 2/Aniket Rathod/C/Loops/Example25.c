// 1 to 100 ---> palindrome
//  121 ---> reverse ---> 121			19291 ---> reverse --> 19291

int main()
{
    int no,rem,tmp,rev=0;

    printf("\n List of Palindrome Nos: ");
    for(no=1;no<=100;no++)
    {
        rev=0;
        tmp=no;
        for( ; no!=0 ; )
        {
            rem=no%10;
            rev=(rev*10)+rem;
            no=no/10;
        }

        if(tmp==rev)
            printf("%6d",tmp);

        no=tmp;
    }
    return 0;
}

