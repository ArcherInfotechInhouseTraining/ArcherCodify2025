// Question - 5
// We Take LowerCase, UpperCase & Spaces String, We Have to Make It Into Title Case And Should Unchanged The Acronyms
// For e.g raj kashid ISO

#include <iostream>
#include <string>
using namespace std;

void make_title_case(string str)
{
    char new_str[str.length()];
    int i;
    if ((str[0] >= 'a' && str[0] <= 'z'))
    {
        new_str[0] = str[0] - 32;
    }
    else
    {
        new_str[0] = str[0];
    }
    for (i = 1; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i - 1] >= 'A' && str[i - 1] <= 'Z') && (str[i + 1] >= 'A' && str[i + 1] <= 'Z')) // ISO --> ISO
        {
            new_str[i] = str[i];
        }
        // Following Conditions Are For Title Case
        else if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == 32) // _a --> -A
        {
            new_str[i] = str[i] - 32;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') && str[i - 1] == 32) // _A --> -A
        {
            new_str[i] = str[i];
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') // RAj --> Raj
        {
            new_str[i] = str[i] + 32;
        }
        else // Raj|_|Kashid
        {
            new_str[i] = str[i];
        }
    }
    new_str[i] = '\0';
    cout << "\nNew String : " << new_str;
}
int main()
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);
    cout << "\nOld String : " << str;
    make_title_case(str);
    return 0;
}