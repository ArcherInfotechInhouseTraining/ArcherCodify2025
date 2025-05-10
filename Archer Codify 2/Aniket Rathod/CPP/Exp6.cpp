// Escape Sequence Characters

#include <iostream>
using namespace std;

int main() {
    cout << "----------------Escape Sequence Characters Demo-------------\n";
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
