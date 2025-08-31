#include<iostream>
#include <iostream>
int main() {
    int intValue;
    short shortValue;
    long longValue;
    long long longLongValue;

    // Input different types of integers
    std::cout << "Enter an integer (int): ";
    std::cin >> intValue;

    std::cout << "Enter an integer (short): ";
    std::cin >> shortValue;

    std::cout << "Enter an integer (long): ";
    std::cin >> longValue;

    std::cout << "Enter an integer (long long): ";
    std::cin >> longLongValue;

    // Display the input integers
    std::cout << "Integer (int)"<<sizeof(int)<<": " << intValue << std::endl;
    std::cout << "Integer (short)"<<sizeof(short)<<": " << shortValue << std::endl;
    std::cout << "Integer (long)"<<sizeof(long)<<": " << longValue << std::endl;
    std::cout << "Integer (long long)"<<sizeof(long long)<<": " << longLongValue << std::endl;

    return 0;
}
