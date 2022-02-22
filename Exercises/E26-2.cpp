/*
Bài2: Tìm số Fibonacci thứ n với  n nguyên dương trong đoạn [0,93] nhập vào từ bàn phím.
   - Input: một dòng chứa số nguyên dương n.
   - Output: in ra n! hoặc INVALID nếu n <=0 0 HOẶC n >= 93
*/
#include <iostream>
using namespace std;

unsigned long long fibonacci(int n){
    // f(0) = 0, f(1) = 1, f(n) = f(n-1) + f(n-2)
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int n;
    cout << "Nhap so nguyen n trong doan [0,93]: " << endl;
    cin >> n;
    if(n >=0 && n <= 93){
        unsigned long long f = fibonacci(n);
        cout << f << endl;
    }else{
        cout << "INVALID" << endl;
    }
    return 0;
}