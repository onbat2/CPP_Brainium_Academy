#include <iostream>
#include <cctype>

int main(){
    char c = 'A';
    char x = 'e';
    char d = '1';

    std::cout << c << " is uppper case letter? " << isupper(c) << "\n";
    std::cout << c << " is lower case letter? " << islower(c) << "\n";
    std::cout << x << " is uppper case letter? " << isupper(x) << "\n";
    std::cout << x << " is lower case letter? " << islower(x) << "\n";
    std::cout << "\n";

    std::cout << x << " is letter? " << isalpha(x) << "\n";
    std::cout << x << " is digit? " << isdigit(x) << "\n";
    std::cout << x << " is digit or letter? " << isalnum(x) << "\n";
    std::cout << d << " is digit? " << isdigit(d) << "\n";
    std::cout << "\n";

    std::cout << c << " to lower case letter: " << (char)tolower(c) << "\n";
    std::cout << x << " to lower case letter: " << (char)tolower(x) << "\n";
    std::cout << x << " to upper case letter: " << (char)toupper(x) << "\n";
    std::cout << d << " to upper case letter: " << (char)toupper(d) << "\n";
    std::cout << "\n";

    return 0;
}
