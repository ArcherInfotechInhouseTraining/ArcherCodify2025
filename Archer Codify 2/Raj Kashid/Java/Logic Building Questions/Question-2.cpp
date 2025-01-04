// Question - 2
// We Have To Check Email is Valid Or Not
// Rules
// 1. Have @ Symbol
// 2. Before @ --> Don't Have (. or -) Symbols At Start Or End
// 3. After @ --> At End Have (.com or .net or .org)

#include <iostream>
#include <string>
using namespace std;

void input_and_output(string &email)
{
    cout << "Enter Email : ";
    cin >> email;
    cout << "Your Email : " << email;
}

bool check_valid_email(string email)
{
    int count = 0, idx_of_o = 0;
    char last_three_words[3];
    // 1st Rule Validation
    for (int i = 0; email[i] != '\0'; i++)
    {
        if (email[i] == '@')
        {
            idx_of_o = i;
            count++;
        }
    }
    // cout << "\nCount After 1st Rule : " << count << endl;
    // 2nd Rule Validation
    if (email[0] != '.' && email[0] != '-' && email[idx_of_o - 1] != '.' && email[idx_of_o - 1] != '-')
    {
        count++;
    }
    // cout << "\nCount After 2nd Rule : " << count << endl;
    // 3rd Rule Validation
    int i = email.length() - 3;
    while (email[i] != '\0')
    {
        if (email[i] == 'c' || email[i] == 'o' || email[i] == 'm' || email[i] == 'n' || email[i] == 'e' || email[i] == 't' || email[i] == 'r' || email[i] == 'g')
        {
            i++;
        }
        else
        {
            break;
        }
    }
    if (i == email.length())
    {
        count++;
    }
    // cout << "\nCount After 3rd Rule : " << count << endl;
    if (count == 3)
    {
        return true;
    }
    return false;
}

int main()
{
    string email;
    input_and_output(email);
    if (check_valid_email(email))
    {
        cout << "\nYour email is valid";
    }
    else
    {
        cout << "\nYour email is not valid";
    }
    return 0;
}