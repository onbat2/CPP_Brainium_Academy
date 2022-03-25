/*
Bài4: Nhập vào ba số nguyên a, b, c. Hãy tìm giá trị lớn nhất trong ba số đó.
      Nếu 3 số bằng nhau thì không có số lớn nhất.
*/

#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Nhập vào 3 số nguyên a, b, c: ";
    cin >> a >> b >> c;
    if(a == b % a == c){
        cout << "Không có giá trị max" << endl;
    } else{
        int max = a;
        if(b > max){
            max = b;
        }
        if(c > max){
            max = c;
        }
        cout << max << " là giá trị max." << endl;
    }
    return 0;
}