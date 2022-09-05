#include <iostream>
#include <cstdlib>

int main(){
    const char* str1 = "123.25abc";
    const char* str2 = "10010101ABCHKJKLL";
    const char* str3 = "12FCABHGPPOIUYT155";
    char* endPtr;

    std::cout << "Integer value from str1: " << atoi(str1) << "\n";
    std::cout << "Double value from str1: " << atof(str1) << "\n";
    std::cout << "\n";

    std::cout << "Long value from str2: " << strtol(str2, &endPtr, 2) << "\n";
    std::cout << "endPtr value: " << endPtr << "\n";
    std::cout << "\n";

    std::cout << "Long long value from str2: " << strtoll(str3, &endPtr, 16) << "\n";
    std::cout << "endPtr value: " << endPtr << "\n";
    std::cout << "\n";

    return 0;

}
