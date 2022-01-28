//Bài15: Cấu trúc lặp for

//VD:Tính tổng S = 1 + 1/2 + 1/3 + … + 1/n

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter posity integer number: " << endl;
    cin >> n;
    if (n > 0) {
        double sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += 1.0 / i;
        }
        cout << "Sum = " << sum << endl;
    }
    else {
        cout << "Invalid value. "
             << "Please enter a number > 0." << endl;
    }
}