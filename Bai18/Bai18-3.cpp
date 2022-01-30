//VD3: Viết chương trình vẽ hình chữ nhật đặc bằng các dấu * có kích thước with, height nhập vào từ bàn phím

#include <iostream>

using namespace std;

int main() {
    int width;
    int height;
    cout << "Enter width and height: ";
    cin >> width >> height;
    // vẽ hình chữ nhật đặc:
    for (int i = 1; i <= width; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}