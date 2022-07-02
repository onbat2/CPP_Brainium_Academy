//Bài 23: Giới thiệu một số thư viện trong C++

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << M_PI << endl;
    cout << M_E << endl;
    double angle = 45 * M_PI / 180;
    cout << "sin(45) = " << sin(angle) << endl;
    cout << "cos(45) = " << cos(angle) << endl;
    cout << "asin(0.5) = " << asin(0.5) * 180 / M_PI << endl;
    cout << "asin(0.866) = " << asin(0.866) * 180 / M_PI << endl;

    //tinh e^5
    cout << "e^5 = " << exp(5) << endl;
    //tach phan nguyen, thap phan
    double fractPart, intPart;
    fractPart = modf(M_PI, &intPart);
    cout << "PI = " << intPart << " + " << fractPart << endl;
    //tinh a^b
    int a=5;
    int b=6;
    cout << "a^b = " << pow(a,b) << endl;
    //lam tron
    double x = 12.45;
    double y = -5.88;
    cout << "round(x) = " << round(x) << endl;
    cout << "round(y) = " << round(y) << endl;
    //tim phan du
    cout << "Phan du cua x/y = " << remainder(x,y) << endl;
    //kiem tra co phai gia tri vo cuc?
    cout << "/0 co phai gia tri vo cuc? => " << isinf(x/0) << endl;
    //kiem tra NaN
    cout << "sprt(-9) la NaN? " << isnan(sqrt(-9)) << endl;
    //kiem tra x>y?
    cout << "x>y? " << isgreater(x ,y) << endl;

    return 0;
}