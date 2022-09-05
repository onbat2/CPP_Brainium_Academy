#include <iostream>
#include <string>

int main(){
    std::string s0 = "Today is ";
    std::string s1 = "Monday";
    std::string s2 = "Tuesday";

    //+=
    s0 += s1;
    std::cout << "(s0 += s1) ---> " << s0 << "\n";

    //push back
    s1.push_back('Q');
    std::cout << "after push back: " << s1 << "\n";

    //pop back
    s1.pop_back();
    std::cout << "after pop back: " << s1 << "\n";

    //insert
    s2.insert(2, s1);
    std::cout << "after insert: " << s2 << "\n";

    //replace
    s0.replace(2, 5, "Woa");
    std::cout << "after replace: " << s0 << "\n";

    return 0;
}
