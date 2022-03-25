/*
Bài2: Viết chương trình nhập vào một số nguyên n và cho biết đó là số âm,
      số dương, số không âm không dương
 */

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Nhập vào số nguyên n: ";
    cin >> n;
    if(n > 0){
        cout << n << " là số dương" << endl;
    }else if(n < 0){
        cout << n << " là số âm" << endl;
    }else{
        cout << n << " là số không âm cũng không dương";
    }
    return 0;
}