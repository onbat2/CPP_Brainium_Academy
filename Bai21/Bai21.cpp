//Bài 21: Tổng quan về hàm

#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

double divide(int a, int b){
    return 1.0 * a / b;
}

int main(){
    int a, b;
    cout << "Nhap vao 2 so nguyen a, b: ";
    cin >> a >> b;

    cout << a << " + " << b << " = " << add(a, b) << endl;
    cout << a << " - " << b << " = " << subtract(a, b) << endl;
    cout << a << " * " << b << " = " << multiply(a, b) << endl;
    if (b != 0){
        cout << a << " / " << b << " = " << divide(a, b) << endl;
    }
    else{
        cout << "Error!" << endl;
    }
    return 0;
}