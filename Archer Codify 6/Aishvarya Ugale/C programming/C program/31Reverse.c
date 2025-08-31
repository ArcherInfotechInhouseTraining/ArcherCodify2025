
    // WAP to Reverse the no entered thw keyboard.

    #include<stdio.h>
    void main()
    {

        int no,rev,rem;

        printf("Enter Number\n");
        scanf("%d",&no);
        for(rev=0; no!=0 ; no=no/10)
        {
            rem=no%10;
            rev=(rev*10)+rem;
        }
        printf("Reverse :%d",rev);
    }
