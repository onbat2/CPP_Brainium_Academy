//Bài 26: Hàm đệ quy

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned int n) {
    if(n < 2) { //trường hợp cơ sở
        return 1;
    }
    else {
        return n * factorial(n - 1); //bước đệ quy 
    }
}

int main(){
    unsigned int n;
    cout << "Nhap so tu nhien n: ";
    cin >> n;
    cout << "n! = " << factorial(n) << endl;
    cout << UINT_FAST64_MAX << endl;
    return 0;
}
