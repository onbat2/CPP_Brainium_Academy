//Bài 24: Gọi hàm bằng truyền tham chiếu và truyền giá trị

#include <iostream>

using namespace std;

//nhập vào 2 số nguyên a,b
//đổi chỗ 2 phần tử a,b: tham chiếu và truyền giá trị
//khai báo nguyên mẫu hàm

void getUserInput(int& a, int& b);
void swapAB(int a,int b);
void swapRef(int& a, int& b);

int main(){
    int a, b;
    getUserInput(a, b);
    cout << "Gia tri goc cua a= " << a << ", b = " << b << endl;
    //gọi hàm truyền giá trị
    swapAB(a, b);
    cout << "Sau khi goi ham swap AB(). Gia tri cua a= "
         << a << ", b = " << b << endl;
    //gọi hàm truyền tham chiếu
    swapRef(a, b);
    cout << "Sau khi goi ham swapRef(). Gia tri cua a= "
         << a << ", b = " << b << endl;

    return 0;
}

//hàm tham chiếu nhận dữ liệu đầu vào cho a,b
void getUserInput(int& a, int& b){
    cout << "Nhap vao hai so nguyen a,b: ";
    cin >> a >> b;
}
//hàm đổi chỗ a,b truyền giá trị
void swapAB(int a,int b){
    int x = a;
    a = b;
    b = x;
}
//hàm đổi chỗ a,b truyền tham chiếu
void swapRef(int& a, int& b){
    int x = a;
    a = b;
    b = x;
}