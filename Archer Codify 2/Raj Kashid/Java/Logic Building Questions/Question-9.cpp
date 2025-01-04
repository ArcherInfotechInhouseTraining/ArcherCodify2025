// Question - 9
// We have to check Isograms
// For e.g. Machine --> Isogram, Because there is not repeating characters

#include <iostream>
#include <cctype> // For tolower()
using namespace std;
bool isIsogram(const string &str)
{
    int freq[256] = {0}; // Covers all ASCII characters

    for (char ch : str)
    {
        if (isalpha(ch))
        { // Only check alphabetic characters
            ch = tolower(ch);
            freq[ch]++;
            if (freq[ch] > 1)
            {
                return false; // Not an isogram
            }
        }
    }

    return true; // All characters are unique
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isIsogram(input))
    {
        cout << "The string is an isogram.\n";
    }
    else
    {
        cout << "The string is not an isogram.\n";
    }

    return 0;
}
