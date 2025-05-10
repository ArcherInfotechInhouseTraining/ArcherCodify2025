/*#include <iostream>
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
    cout << "14. Hexadecimal representation: \x48\x65\x6C\x6U\x6F\n";

    return 0;
}*/


/*#include <iostream>
#include <iomanip> // for manipulators
using namespace std;
int main() {
    // setw(int n)
    cout << setw(20) << "Name" << setw(10) << "Age" << setw(15) << "Salary" << endl;
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
}*/


//int x=100;		const int y=200;

/*#include <iostream>
int main() {
    // Declaring integer constants
    const int MAX_VALUE = 100;
    const int MIN_VALUE = 0;

    // Declaring floating-point constants
    const double PI = 3.14159;
    const float GRAVITY = 9.81f;

    // Declaring character constants
    const char NEWLINE = '\n';
    const char TAB = '\t';

    // Using constants in expressions
    int range = MAX_VALUE - MIN_VALUE;
    double circumference = 2 * PI * 5.0;

    // Outputting constants
    std::cout << "Range: " << range << NEWLINE;
    std::cout << "Circumference: " << circumference << NEWLINE;

   /// MIN_VALUE=10; /// error: assignment of read-only variable 'MIN_VALUE'|
    return 0;
}
*/

/*#include<iostream>
int main() {
    constexpr int MAX_VALUE = 100;
    int num = 5;
    // Print the values
    std::cout << "Max value: " << MAX_VALUE << std::endl;
    std::cout << " num: " << num << std::endl;

    //MAX_VALUE=300; ///error: assignment of read-only variable 'MAX_VALUE'
    num=200;
    std::cout << "Max value: " << MAX_VALUE << std::endl;
    std::cout << " num: " << num << std::endl;

    return 0;
}*/


/*#include <iostream>
using namespace std;
int main() {
    cout << "Escape Sequence Characters Demo:\n ";
    cout << "1. Newline: Line 1\nLine 2\nLine 3\n";
    cout << "2. Horizontal tab: Column 1\tColumn 2\tColumn 3\n";
    cout << "3. Backspace: 123\b45\n";
    cout << "4. Carriage return: 1234\rAB\n";
    cout << "5. Backslash: C:\\path\\to\\file\n";
    cout << "6. Single quote: It\'s raining.\n";
    cout << "7. Double quote: She said, \"Hello.\"\n";
    cout << "8. Null character: Hello\0World\n";
   cout << "9. Alert (bell): Beep!\a\a\a\a\a\a\a\a\a\ \n";
    cout << "10. Form feed: Page 1\fPage 2\n";
    cout << "11. Vertical tab: Line 1\vLine 2\n";
    cout << "12. Question mark: What\? Why\?\n";
    cout << "13. Octal representation: \110\145\154\154\157\n";
    cout << "14. Hexadecimal representation: \x48\x65\x6C\x6C\x6F\n";

    return 0;
}*/

// using scoped
/*#include<iostream>
using namespace std;
int main()
{
    enum class Color {RED=7, GREEN=20, BLUE};
    enum class Ink {BLACK, PINK, YELLOW, RED};

   // cout<<endl<<" Colors:"<<RED<<"\t"<<GREEN<<"\t"<<BLUE; //error: 'RED' was not declared in this scope|
    cout<<endl<<" Colors:"<<(int)Color::RED<<"\t"<<(int)Color::GREEN<<"\t"<<(int)Color::BLUE;

    cout<<endl<<"INK:"<<(int)Ink::BLACK<<"\t"<<(int)Ink::PINK<<"\t"<<(int)Ink::RED;

    return 0;
}*/


///Write a program to print the frequency of all numbers in an array.
#include<stdio.h>
int main()
{
    int x[5],i,j,cnt,y[5];
    printf("\n enter the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n %d",x[i]);
    }
    
     for(i=0;i<5;i++)
    {
        cnt=0;
       for(j=0;i<5;j++)
       {
        if(x[i]==x[j])
        {    x[i]=-1;
           
            cnt++;
            
        }
        
    }
    printf("\n %d",cnt);
    }
return 0;
}







