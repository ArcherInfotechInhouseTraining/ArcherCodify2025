
#include <iostream>
#include <iomanip> // for manipulators
using namespace std;
int main() {
    // setw(int n)
    cout << setw(20) << "Name" << setw(10) << "Age" << setw(15) << "Salary" << endl;
    cout << setw(20) << "John Doe" << setw(10) << 30 << setw(15) << 50000.0 << endl;
    // setprecision(int n) and fixed
    double pi = 3.14159265359;
   cout << setprecision(3) << fixed << "Pi: " << pi << endl;//fixed use bcz te nhi ghetl tr 3 takl tri 2n ch value yeta mhnje (n-1)
     //cout << setprecision(3) << "Pi: " << pi<<endl;
     // scientific

    double num = 123456.789;
    cout << scientific << "Number: " << num << endl;//value scientificly display hote
   // cout<< "Number: " << num << endl;
    // left and right
    cout << setw(10) << left << "Left" << setw(10) << right << "Right" << endl;//setw mdhe jevdhe value taku tevdhe space value ch aadhi print hota
    // boolalpha
    bool flag = true;
    cout << boolalpha << "Flag: " << flag << endl;
    // hex, oct, and dec
    int value = 255;
    cout << "Hex: " << hex << value << endl;
    cout << "Oct: " << oct << value << endl;
    cout << "Dec: " << dec << value << endl;
    return 0;
}
