#include <iostream>
using namespace std;

class String
{
    char data[50];
    bool isValid;
    int count = 0, cnt = 0;

public:
    void input_string()
    {
        cout << endl
             << "Enter the email: ";
        cin.getline(data, 50);
        cout << data;
    }

    void check_symbol()
    {
        isValid = false;
        for (int i = 0; data[i] != '\0'; i++)
        {
            if (data[i] == '@')
            {
                isValid = true;
                count++;
            }
        }
        if (isValid == true)
        {
            if (count == 1)
            {
                cout << endl
                     << "Email is Valid";
            }
            else
            {
                cout << endl
                     << "Email is invalid:1";
            }
        }
    }

    void check_before_symbol()
    {
        for (int j = 0; data[j] != '\0'; j++)
        {
            if (data[j] == '@')
            {
                for (int k = 0; data[k] != '\0'; k--)
                {
                    if ((data[k - 1] == '.' || data[0] == '.') || (data[k - 1] == '-' || data[0] == '-'))
                    {
                        cout << endl
                             << "Invalid start or end with . or -";
                    }
                    else
                    {
                        cout << endl<< "valid Email:2";
                    }
                }
            }
        }
    }

    void check_part_after()
    {
        for (int i = 0; data[i] != '\0'; i++)
        {
            if (data[i] == '@')
            {
                for (int j = 0; data[i] != '\0'; j++)
                {
                    if(data[j]=='.')
                    {
                        for(int k=0;data[k]!='\0';k++)
                        {
                            if(( data[k+1]=='c' && data[k+2]='o' && data[k+3]=='m') || (data[k+1]=='n' && data[k+2]== 'e' && data[k+3]=='t') ||(data[k+1]=='o' && data[k+2]=='r' && data[k+3]=='g'))
                            {
                                cout << endl<< "Email valid:3.1";
                            }
                            else
                            {
                                cout << endl<< "Email invalid";
                            }
                        }
                    }
                }
            }
        }
    }
};

int main()
{
    String S1;
    S1.input_string();

    S1.check_symbol();

    S1.check_before_symbol();

    S1.check_part_after();
}