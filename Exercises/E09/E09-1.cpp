/*
Bài1: Viết chương trình cho phép nhập vào một số nguyên n.
      Hãy cho biết số đó là số chẵn hay số lẻ?
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Nhập số nguyên n: ";
    cin >> n;
    if (n % 2 == 0){
        cout << n << " là số chẵn" << endl;
    }else{
        cout << n << " là số lẻ" << endl;
    }
    return 0;
}