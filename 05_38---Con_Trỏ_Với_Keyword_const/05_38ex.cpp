#include <iostream>

#define SIZE 20

void getArrayElements(int* const arr, int& size);
void showArrayElements(const int* const arr, int const size);
void sort(int* arr, int size);


int main(){
    int arr[SIZE];
    int n;

    getArrayElements(arr, n);
    std::cout << "Array elements: " << "\n";;
    showArrayElements(arr, n);

    sort(arr, n);
    std::cout << "Array elements after sort ASC: " << "\n";
    showArrayElements(arr, n);
    return 0;
}

//hàm nhập dữ liệu vào
void getArrayElements(int* const arr, int& size){
    std::cout << "Enter array size > 0: ";
    std::cin >> size;
    if(size > 0){
        for(int i = 0; i < size; i++){
            std::cin >> *(arr + i);
        }
    } else{
        std::cout << "ERROR";
    }
}

//hàm hiển thị ra màn hình
void showArrayElements(const int* const arr, int const size){
    for(int i = 0; i < size; i++){
        std::cout << *(arr + i) << " ";
    }
    std::cout << "\n";
}

//hàm sắp xếp mảng theo thứ tự tăng dần
void sort(int* arr, int size){
    for(int i = 0; i < size; i++){
        for (int j = size - 1; j > i ; j--) {
            if (*(arr + j) < *(arr + j - 1)){
                std::swap(*(arr + j), *(arr + j - 1));
            }
        }
    }
}
