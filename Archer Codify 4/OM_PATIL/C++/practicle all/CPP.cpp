/*
#include<iostream>
int main()
{
    std::cout<<"Welcome to c++";
    return 0;
}



#include<iostream>
int main()
{
	std::cout<<" ********** Personal Details **********";
	std::cout<<"Name: Amit Ajit Pol";
	std::cout<<"age: 23";
	std::cout<<"contact number 9850678451";
	std::cout<<"Email: info@archerinfotech.in";
	std::cout<<"Address: F12, Divyadarshan soviety, behind kothrud bus stand, kothrud, Pune";
	return 0;
}



#include <iostream>
using namespace std;
int main() {
    cout << "Escape Sequence Characters Demo:\n";
    cout << "1. Newline: Line 1\nLine 2\nLine 3\n";
    cout << "2. Horizontal tab: Column 1\tColumn 2\tColumn 3\n";
    cout << "3. Backspace: 123\b45\n";
    cout << "4. Carriage return: 1234\rAB\n";
    cout << "5. Backslash: C:\\path\\to\\file\n";
    cout << "6. Single quote: It\'s raining.\n";
    cout << "7. Double quote: She said, \"Hello.\"\n";
    cout << "8. Null character: Hello\0World\n";
    cout << "9. Alert (bell): Beep!\a\n";
    cout << "10. Form feed: Page 1\fPage 2\n";
    cout << "11. Vertical tab: Line 1\vLine 2\n";
    cout << "12. Question mark: What\? Why\?\n";
    cout << "13. Octal representation: \110\145\154\154\157\n";
    cout << "14. Hexadecimal representation: \x48\x65\x6C\x6C\x6F\n";

    return 0;
}





#include <iostream>
#include <iomanip> // for manipulators
using namespace std;
int main() {
    // setw(int n)
    cout << setw(20) << "Name" << setw(-10) << "Age" << setw(15) << "Salary" << endl;
    cout << setw(20) << "John Doe" << setw(10) << 30 << setw(15) << 50000.0 << endl;
    // setprecision(int n) and fixed
    double pi = 3.14159265359;
    cout << setprecision(3) << fixed << "Pi: " << pi << endl;
    // scientific
    double num = 123456.789;
    cout << scientific << "Number: " << num << endl;
    // left and right
    cout << setw(10) << left << "Left" << setw(10) << right << "Right" << endl;
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




// Using Const keyword:(c++98):

//     int x=100;              const int y=200;

#include <iostream>
int main()
{
    // Declaring integer constants
    const int MAX_VALUE = 100;
    const int MIN_VALUE = 0;

    // Declaration floating-point constants
    const double PI = 3.14159;
    const float GRAVITY = 9.81f;

    // Declaring character constants
    const char NEWLINE = '\n';
    const char TAB = '\t';

    // Using constants in expressions
    
}


*/
