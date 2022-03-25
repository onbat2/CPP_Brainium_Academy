/*
Bài3: Nhập vào 2 số nguyên a, b. Hãy so sánh và đưa ra kết luận xem hai số
      bằng nhau hay khác nhau. Nếu khác nhau thì độ chênh lệch là bao nhiêu đơn vị
*/

#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    cout << "Nhập vào 2 số nguyên a, b: ";
    cin >> a >> b;
    if(a > b){
        cout << a << " và " << b << " khác nhau " << a - b << " đơn vị" << endl;
    } else if (a < b){
        cout << a << " và " << b << " khác nhau " << b - a << " đơn vị" << endl;
    } else{
        cout << a << " bằng " << b << endl;
    }
    return 0;
}