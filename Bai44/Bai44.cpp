//Bài44: Lớp string và các phương thức thường dùng(p1)

#include <iostream>
#include <string>

using namespace std;

int main(){
    string x("Hello");
    string s1;
    string s2(x);
    string s3(10,'l');

    cout << "x = " << x << endl;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;
    return 0;
}