//Bài39: Con trỏ hàm

#include <iostream>

using namespace std;

int add(int a, int b);
double myDiv(double a, double b);

int main(){
   int (* addFunPtr)(int, int) { &add };
   double (*divFunPtr)(double, double);
   divFunPtr = &myDiv;
   int a = 30;
   int b = 15;
   cout << "a + b = " << addFunPtr(a, b) << endl;
   cout << "a / b = " << divFunPtr(a, b) << endl;
   return 0;
}

int add(int a, int b){
    return a + b;
}

double myDiv(double a, double b){
    return a / b;
}