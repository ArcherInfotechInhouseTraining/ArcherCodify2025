#include<iostream>
using namespace std;

int main() {
    int n=5;
    cin >> n;

    if (n > 5) {
        cout << "Greater than 5";
    } else if (n < 5) {
        cout << "Less than 5";
    } else {
        cout << "Equal to 5";
    }

    return 0;
}
