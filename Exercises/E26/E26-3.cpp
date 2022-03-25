/*
Bài3: Tính a^b với a,b nguyên nhập vào từ bàn phím, b >= 0
   Input: một dòng chứa n số nguyên a, b.
   Output: in ra a^b hoặc INVALID nếu b < 0.
*/

#include <iostream>
using namespace std;

long long exponential(int a, int b){
    // a^b = a * a^(b-1)
    if (a == 0){
        return 0;
    }
    if (b == 0){
        return 1;
    }
    if (b == 1){
        return a;
    }
    else{
        return a* exponential(a, b -1);
    }
}

int main(){
    int a;
    int b;
    cout << "Nhap so nguyen a: " << endl;
    cin >> a;
    cout << "Nhap so nguyen b >= 0: " << endl;
    cin >> b;
    if(b >= 0){
        long long f = exponential(a, b);
        cout << "So ban can tim la: " << f << endl;
        return 0;
    }
    else{
        cout << "INVALID" << endl;
    }
}
