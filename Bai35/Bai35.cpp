//Bài35: Con trỏ và địa chỉ vùng nhớ

#include <iostream>
#include <iomanip><

using namespace std;

int main(){
    int a = 300;
    int b = 260;
    int sum = a + b;
    string msg = "Noice";

    //khai báo con trỏ
    int* aPtr = &a;
    string* msgPtr = &msg;
    char* namePtr = nullptr;

    cout << "Ex 1: " << endl;
    cout << left << setw(25) << "Dia chi" << setw(15)
         << "Gia tri" << endl;
    cout << left << setw(25) << &a << setw(15)
         << a << endl;
    cout << left << setw(25) << &b << setw(15)
         << b << endl;
    cout << left << setw(25) << &sum << setw(15)
         << sum << endl;

    cout << "\nEx 2: " << endl;
    cout << "Dia chi bien a: " << &a << endl;
    cout << "Gia tri trong aPtr: " << aPtr << endl;
    cout << "Dia chi bien msg: " << &msg << endl;
    cout << "Gia tri trong msgPtr: " << msgPtr << endl;

    *msgPtr  = "hehe";
    cout << "\nGia tri trong dia chi ma aPtr dang tro toi: "
         << *aPtr << endl;
    cout << "Gia tri trong dia chi ma msgPtr dang tro toi: "
         << *msgPtr << endl;

    return 0;
}