#include <iostream>

int add(int a, int b);
double myDiv(double a, double b);

int main(){
   int (* addFunPtr)(int, int) { &add };
   double (*divFunPtr)(double, double);
   divFunPtr = &myDiv;
   int a = 30;
   int b = 15;
   std::cout << "a + b = " << addFunPtr(a, b) << "\n";
   std::cout << "a / b = " << divFunPtr(a, b) << "\n";
   return 0;
}

int add(int a, int b){
    return a + b;
}

double myDiv(double a, double b){
    return a / b;
}
