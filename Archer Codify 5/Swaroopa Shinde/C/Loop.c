//Write a C program to convert Binary to Octal number system.
/*#include<stdio.h>
#include<stdlib.h>
int convert(long long bin);
int main()
{
    long long bin;
    printf("Enter a binary number");
    scanf("%d",&bin);
    printf("%d in binary=%d in octal",bin,convert(bin));
    return 0;
}
int convert(long long bin)
{
    int oct=0,dec=0,i=0;
    while(bin!=0)
    {
        dec+=(bin%10)*pow(2,i);
        ++i;
        bin/=10;
    }
    i=1;
    while(dec!=0)
    {
        oct+=(dec%8)*i;
        dec/=8;
        i*=10;
    }
    return oct;
}
*/
//===========================================================================================================

//Write a C program to convert Binary to Decimal number system
/*#include<stdio.h>
#include<stdlib.h>
int binaryToDecimal(int n)
{
    int num=n;
    int dec_value=0;
    int base=1;
    int temp=num;
    while(temp)
    {
        int last_digit=temp%10;
        temp=temp/10;
        dec_value+=last_digit*base;
        base=base*2;
    }
    return dec_value;
    }
    int main()
    {
        int num=1010101;
        printf("%d",binaryToDecimal(num));
    }
*/

//============================================================================================================

//Write a C program to convert Binary to Hexadecimal number system
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int binaryval,hexadecimal=0,i=1,rem;
    printf("Enter the binary number");
    scanf("%d",&binaryval);
    while(binaryval!=0)
    {
        rem=binaryval%10;
        hexadecimal=hexadecimal + rem * i;
        i=i*2;
        binaryval=binaryval/10;
    }
    printf("Equivalent hexadecimal value:%d",hexadecimal);
    return 0;
    }
*/

//===================================================================================================

//Write a C program to convert Octal to Binary number system.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char octalnum;
    long i=0;
    printf("Enter any octal number:");
    scanf("%s",octalnum);
    printf("equvalent binary value:");
    while(octalnum[i])
    {
        switch(octalnum[i])
        {
        case'0':
            printf("000");
            break;
        case'1':
            printf("001");
            break;
        case'2':
            printf("010");
            break;
        case'3':
            printf("011");
            break;
        case'4':
            printf("100");
            break;
        case'5':
            printf("101");
            break;
        case'6':
            printf("110")
            break;
        case'7':
            printf("111");
            break;
        default:
            printf("\n Invalid octal digit %c",octalnum[i]);
            return 0;
        }
        i++;
    }
    return 0;
}
