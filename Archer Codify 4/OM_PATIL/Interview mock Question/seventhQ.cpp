/*
====================Decimal---to--->Binary======================
#include<iostream>
using namespace std;

int dectoBin(int decnum)
{
    int ans=0,pow=1;
    while(decnum>0)
    {
        int rem=decnum%2;
        decnum=decnum/2;

        ans=ans+(pow*rem);
        pow=pow*10;
    }
    return ans;
};

int main()
{
    int decnum=50;

    cout<<dectoBin(decnum);
    return 0;
}


*/


//==================Binary----to---->Decimal=======================

#include<iostream>
using namespace std;

int bintodec(int binnum)
{
    int pow=1,ans=0;

    while(binnum>0)
    {
        int rem=binnum%10;
        ans=ans+(rem*pow);

        binnum=binnum/10;
        pow=pow*2;
    }
    return ans;
}

int main()
{
    int binnum=100;

    cout<<bintodec(binnum);

    return 0;
}