#include <iostream>
#include <string>

int main(){
    std::string s0 = "Today is ";
    std::string s1 = "Monday";
    std::string s2 = "day";

    //chuyen sang mang char
    const char* s0Ptr = s0.c_str();
    std:: cout << "s0 in char array: " << s0 << "\n";

    //tim s2 trong s1
    std::cout << "position of s2 in s1" << s1.find(s2) << "\n";
    std::cout << "position of s0 in s1" << s1.find(s0) << "\n";

    //lay chuoi con
    std::string subStringOfS0 = s0.substr(0, 5);
    std::cout << "sub string of s0: " << subStringOfS0 << "\n";

    //so sanh
    std::cout << "s1 compare s2: " << s1.compare(s2) << "\n";
    std::cout << "s2 compare s1: " << s2.compare(s1) << "\n";
    std::cout << "3 char form 3 pos of s1 compare s2: "
              << s1.compare(3, 3, s2) << "\n";

    return 0;
}
