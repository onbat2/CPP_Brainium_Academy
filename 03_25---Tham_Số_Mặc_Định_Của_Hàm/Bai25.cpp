//Bài 25: Tham số mặc định của hàm

#include <cmath>
#include <iostream>

using namespace std;

unsigned inline long boxVolume(unsigned long length = 1 ,
                        unsigned long  width = 1 ,
                        unsigned long height = 1);

double circleArea(double radius = 1.0){
    return M_PI * radius * radius;
}

int main(){
    unsigned long lenghth = 25;
    unsigned long width = 68;
    unsigned long height = 125;
    //gọi hàm với các lời gọi khác nhau
    cout << "Full parameters: V = "
         << boxVolume(lenghth, width, height) << endl;
    cout << "Obmit last parameter: V = "
         << boxVolume(lenghth, width) << endl;
    cout << "Obmit 2 last parameters: V = "
         << boxVolume(lenghth) << endl;
    cout << "Obmit all parameters: V = "
         << boxVolume() << endl;
    cout << "==============================" << endl;

    //lời gọi hàm tính diện tích đường tròn
    double radius = 7.75;

    cout << "Circle area with full parameter: "
         << circleArea(radius) << endl;
    cout << "Circle area with no parameter: "
         << circleArea() << endl;
    return 0;
}

unsigned inline long boxVolume(unsigned long length,
                        unsigned long  width,
                        unsigned long height){
    return length * width * height;
}