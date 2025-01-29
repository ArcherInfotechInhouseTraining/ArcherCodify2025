// Question - 6
// We have to take a number and convert it into string
// for e.g --> 1234 --> one two three four

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    string nums[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    while (rev != 0)
    {
        cout << nums[rev % 10] << " ";
        rev /= 10;
    }

    return 0;
}