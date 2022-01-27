//Toán tử so sánh 3 chiều

#include <iostream>
#include <compare>

using namespace std;

int main() {
    int x = 100;
    int y = 500;
    // sử dụng toán tử so sánh ba chiều
    auto result = x <=> y;
    if (result < 0) {
        cout << "x < y" << endl;
    }
    else if (result == 0) {
        cout << "x = y" << endl;
    }
    else {
        cout << "x > y" << endl;
    }
    // hoặc tương đương:
    if (result == strong_ordering::less) {
        cout << "x < y" << endl;
    }
    else if (result == strong_ordering::equal) {
        cout << "x = y" << endl;
    }
    else if (result == strong_ordering::greater) {
        cout << "x > y" << endl;
    }
}
// Kết quả: x < y