// Question - 8
// We have to convert string into acronym
// for e.g. Portable network graphics --> PNG

#include <iostream>
#include <cctype> // For isalpha and toupper
using namespace std;

void make_Acronym(const string &str)
{
    string new_str;
    bool take_next = true; // To decide if the current character is part of the acronym

    for (char ch : str)
    {
        if (isalpha(ch) && take_next)
        {                           // Check if it's an alphabet and the start of a word
            new_str += toupper(ch); // Add uppercase letter to the acronym
            take_next = false;      // Skip subsequent characters in the word
        }
        else if (isspace(ch))
        { // Reset on space
            take_next = true;
        }
    }

    cout << "Acronym: " << new_str << endl;
}

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    cout << "String: " << str << endl;
    make_Acronym(str);
    return 0;
}
