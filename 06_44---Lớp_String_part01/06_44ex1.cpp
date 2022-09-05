#include <iostream>
#include <string>

int main(){
    std::string x("Hello");

    std::string s1;
    std::string s2(x);
    std::string s3(10, 'a');

    std::cout << "x = " << x << "\n";
    std::cout << "s1 = " << s1 << "\n";
    std::cout << "s2 = " << s2 << "\n";
    std::cout << "s3 = " << s3 << "\n";

}
