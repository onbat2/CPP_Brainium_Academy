#include <iostream>
#include "caculator.h"

using namespace std;

int main(){
    double number1;
    double number2;
    cout << "Nhap vao 2 so thuc: " << endl;
    cin >>  number1 >> number2;

    cout << number1 << " + " << number2 << " = "
         << addTwoNumbers(number1,number2) << endl;
    cout << number1 << " - " << number2 << " = "
         << subtract(number1,number2) << endl;
    cout << number1 << " * " << number2 << " = "
         << multiply(number1,number2) << endl;
    cout << number1 << " / " << number2 << " = "
         << divide(number1,number2) << endl;

    return 0;
}