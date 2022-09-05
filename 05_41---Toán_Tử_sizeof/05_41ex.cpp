#include <iostream>

int main(){
    int x = 200;
    double y = 2.25;
    short s = 25;

    int arr[10] = {1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9, 10};
    int* aPtr = arr;

    std::cout << "Size of type int: " << sizeof(int) << "\n";
    std::cout << "Size of type double: " << sizeof(double) << "\n";
    std::cout << "Size of type float: " << sizeof(float) << "\n";
    std::cout << "Size of type long: " << sizeof(long) << "\n";
    std::cout << "Size of type short: " << sizeof(short) << "\n";
    std::cout << "Size of type bool: " << sizeof(bool) << "\n";
    std::cout << "Size of x: " << sizeof(x) << "\n";
    std::cout << "Size of y: " << sizeof y << "\n";
    std::cout << "Size of s: " << sizeof s << "\n" << "\n";

    std::cout << "Size of arr: " << sizeof(arr) << "\n";
    std::cout << "Size of *aPtr: " << sizeof(aPtr) << "\n" << "\n";

    return 0;
}
