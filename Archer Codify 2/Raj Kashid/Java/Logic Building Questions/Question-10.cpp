// Question - 10
// We have to check valid parenthesis
// For e.g. [({})][] --> Valid

#include <iostream>
using namespace std;

bool isValidParenthesis(const string &str)
{
    int round = 0;
    int square = 0;
    int curly = 0;

    for (char ch : str)
    {
        if (ch == '(')
        {
            round++;
        }
        else if (ch == ')')
        {
            round--;
            if (round < 0)
                return false;
        }
        else if (ch == '[')
        {
            square++;
        }
        else if (ch == ']')
        {
            square--;
            if (square < 0)
                return false;
        }
        else if (ch == '{')
        {
            curly++;
        }
        else if (ch == '}')
        {
            curly--;
            if (curly < 0)
                return false;
        }
    }

    return round == 0 && square == 0 && curly == 0;
}

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);

    if (isValidParenthesis(str))
    {
        cout << "Valid Parenthesis" << endl;
    }
    else
    {
        cout << "Invalid Parenthesis" << endl;
    }

    return 0;
}
