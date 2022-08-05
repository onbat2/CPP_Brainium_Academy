#include <iostream>
#define SIZE 10

void showArrayV1(int* arr, int size){
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void showArrayV2(int* arr, int size){
    for(int* aPtr = arr; aPtr < (arr + size); aPtr++){
        std::cout << *aPtr << " ";
    }
    std::cout << "\n";
}

void showArrayV3(int* arr, int size){
    for(int* aPtr = arr; aPtr <= &arr[size - 1]; aPtr++){
        std::cout << *aPtr << " ";
    }
    std::cout << "\n";
}

void showArrayV4(int* arr, int size){
    for(int i = 0; i < size; i++){
        std::cout << *(arr + i) << " ";
    }
    std::cout << "\n";
}

int main(){
    int m_arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    showArrayV1(m_arr, SIZE);
    showArrayV2(m_arr, SIZE);
    showArrayV3(m_arr, SIZE);
    showArrayV4(m_arr, SIZE);
    return 0;
}
