//VD2: Liệt kê các giá trị chia hết cho k != 0 trong đoạn [a,b] với a<b

#include <iostream>

using namespace std;

int main(){
    int a,b;
    int k;
    cout << "Enter two integer numbers a<b: ";
    cin >> a >> b;
    if(a<b){
        cout << "Enter an integer number != 0: ";
        cin >> k;
        if (k != 0)
        {
            for (int i = a; i <= b; ++i)
            {
                if (i % k != 0)
                {
                    continue; //Bỏ qua các lệnh phía dưới
                }
                cout << i << " ";
            }
        } else
        {
            cout << "Please enter k != 0" << endl;
        }
    } else
    {
        cout << "Please enter two integer a < b" << endl;
    }
}