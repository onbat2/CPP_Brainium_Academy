/*Bài1: Tính n! với n nguyên dương không quá 22.
   - Input: một dòng chứa số nguyên dương n.
   - Output: in ra n! hoặc INVALID nếu n < 0 Hoặc n > 22.
*/

#include <iostream>
using namespace std;

//định nghĩa hàm
unsigned long long factorial(int n){
    //unsigned long long: có thể lưu trữ giá trị số lớn nhất
    // n! = n * (n-1)
    if (n <= 1) {
        return 1; // trường hợp cơ sở
    }
    else{
        return n * factorial(n - 1 );
    }
}

int main(){
    int n;
    cout << "Nhap so nguyen n: " << endl;
    cin >> n;
    if(n >= 0 && n <= 22) {
        cout << UINT_LEAST64_MAX << endl;
        //giá trị tối đa có thể lưu trữ của kiểu ULL
        unsigned long long f = factorial(n);
        cout << f << endl;
    }
    else {
        cout << "INVALID" << endl;
    }
    return 0;
}