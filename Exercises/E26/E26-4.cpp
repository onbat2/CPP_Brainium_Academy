/*
Bài4: Tìm ước chung lớn nhất của 2 số nguyên dương a, b nhập vào từ bàn phím
   Input: một dòng chứa 2 số nguyên a, b
   Output: in ra ước chung lớn nhất của a, b hoặc INVALID nếu a <= 0 hoặc b <= 0
*/

#include <iostream>
using namespace std;

long gcd(int a, int b){
    if (a == b){
        return a;
    }
    else if (a > b){
        return gcd(a-b, b);
    }
    else{
        return gcd(a, b-a);
    }
}

int main(){
    int a;
    int b;
    cout << "Nhap so nguyen a, b > 0: ";
    cin >> a >> b;
    if(a > 0 && b > 0){
        long result = gcd(a, b);
        cout << "So ban can tim la: " << result << endl;
        return 0;
    }
    else{
        cout << "INVALID" << endl;
    }
}
