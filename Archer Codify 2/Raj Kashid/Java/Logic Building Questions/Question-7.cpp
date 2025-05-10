// Question - 7
// We have to convert binary number to decimal number
// for e.g. 10010101 --> 149

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int bin_num, dec_num = 0, i = 0, tmp;
    cout << "Enter Binary Number : ";
    cin >> bin_num;
    tmp = bin_num;
    while (tmp != 0)
    {
        if (tmp % 10 == 1)
        {
            dec_num += pow(2, i);
            cout << i << " --> " << dec_num << endl;
        }
        i++;
        tmp /= 10;
    }
    cout << "Binary Number : " << bin_num << endl;
    cout << "Decimal Number : " << dec_num << endl;
    return 0;
}