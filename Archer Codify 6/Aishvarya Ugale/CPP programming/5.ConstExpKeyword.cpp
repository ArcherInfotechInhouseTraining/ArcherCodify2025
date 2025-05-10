
#include<iostream>
int main() {
    constexpr int MAX_VALUE = 100;
    int num = 5;
    // Print the values
    std::cout << "Max value: " << MAX_VALUE << std::endl;
    std::cout << " num: " << num << std::endl;

   // MAX_VALUE=300; ///error: assignment of read-only variable 'MAX_VALUE'
    num=200;
    std::cout << "Max value: " << MAX_VALUE << std::endl;
    std::cout << " num: " << num << std::endl;

    return 0;
}
