#include <iostream>
#include <string>

int main(){
    int x = 123456;
    double d = 1.234456;
    std::string xstring = std::to_string(x);
    std::string dstring = std::to_string(d);

    std::cout << "xstring = " << xstring << "\n";
    std::cout << "dstring = " << dstring << "\n";
    size_t* indexPtr = nullptr;

    std::string number = "31741.d/jsn";
    std::string hexString = "ACDFB334";
    std::string binaryString = "00110100111ahaha";

    int numberInt = std::stoi(number);
    long long LL_HexString = std::stoll(hexString, indexPtr, 16);
    int binaryInt = std::stoi(binaryString, indexPtr, 2);

    std::cout << number << " -> number value: " << numberInt << "\n";
    std::cout << hexString << " -> number value: " << LL_HexString << "\n";
    std::cout << binaryString << " -> number value: " << binaryInt << "\n";
}
