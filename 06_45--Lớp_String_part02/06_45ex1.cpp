#include <iostream>
#include <string>

int main(){
    std::string message = "Hi there!";
    std::cout << "message[0] = " << message[0] << "\n";
    std::cout << "message.at(0) = " << message.at(0) << "\n";
    std::cout << "message.front() = " << message.front() << "\n";
    std::cout << "message.back() = " << message.back() << "\n";

    return 0;
}
