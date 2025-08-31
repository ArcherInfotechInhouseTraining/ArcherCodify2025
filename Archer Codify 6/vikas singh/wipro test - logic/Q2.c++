// 2. Checking if an email address is valid is a useful skill. The Problem Make sure an ermail address follows these rules:

// Has one @ symbol

// The part before @doesn't start or end with. or-

// The part after @ends in .com, net, or org

// If it does, say 'Valid'. If not, say 'Invalid".  can you expalme this question



#include <iostream>
#include <string>
using namespace std;


int main() {
    string email;
    cout << "Enter the email address: ";
    cin >> email;

    int atCount = 0;
    int atPos = -1;

    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            atCount++;
            atPos = i;
        }
    }
    if (atCount != 1) 
    {
        cout << "Invalid" << endl;
    } 
    else if (atPos == 0 || atPos == email.length() - 1) 
    {
        cout << "Invalid" << endl;
    } 
    else if (email[0] == '.' || email[0] == '-' || email[atPos - 1] == '.' || email[atPos - 1] == '-')
    {
        cout << "Invalid" << endl;
    } 
   else {
    string domain = email.substr(atPos + 1);
    if (domain.length() >= 4 && (domain.substr(domain.length() - 4) == ".com" || domain.substr(domain.length() - 4) == ".net" ||  domain.substr(domain.length() - 4) == ".org"))
    {
        cout << "Valid" << endl;
    } 
    else {
        cout << "Invalid" << endl;
    }
}

    return 0;
}
