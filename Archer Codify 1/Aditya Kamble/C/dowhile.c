// #include<stdio.h>

// int main()
// {
//     int start, end, cnt=0;

//     printf("\n Enter a Range:");
//     scanf("%d%d",&start,&end);

//     do
//     {
//         if(start%3==0 && end%5==0)
//         {
//             cnt++;
//         }

//         start++;
//     } while (start<=end);

//         printf("\n count is %d",cnt);
    
// }
#include<stdio.h>

int main()
{
    int start,end,cntb=0,cnt3=0,cnt5=0,cntnb=0;

    printf("\n Enter a Range: ");
    scanf("%d%d",&start,&end);

    do
    {
        if(start%3==0)
        {
            if(start%5==0)
            {
                cntb++;
            }
            else
            {
                cnt3++;
            }
        }
        else if(start%5==0){
            cnt5++;
        }
        else{
            cntnb++;
        }
        start++;
    } while (start<=end);

        printf("\n The Total Count which is Divisible By 3 & 5 is %d", cntb);
        printf("\n The Total Count which is Divisible By 3 is %d ",cnt3);
        printf("\n The Total Count which is Divisible By 5 is %d", cnt5);
        printf("\n The Total Count which is not Divisible By Both is %d",cntnb);

        return 0;
}