/*
Bài5: Tính tổng các chữ số cấu thành của 1 số
   Input: một dòng chứa số nguyên n
   Output: in ra tổng các chữ số của n
*/

#include <iostream>
using namespace std;

int sumOfDigits(long long n){
    if (n < 10){
        return n;
    }
    else{
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main(){
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if( n < 0){
        n = -n;
    }
    int result = sumOfDigits(n);
    cout << "So ban can tim la: " << result << endl;
    return 0;
}