//Bài37: Con trỏ và mảng 1 chiều

#include <iostream>

using namespace std;

#define SIZE 5


void showArrayElementsV1(int* arr, int size);
void showArrayElementsV2(int* arr, int size);
void showArrayElementsV3(int* arr, int size);
void showArrayElementsV4(int* arr, int size);

int main(){
    int a[SIZE] = {50, 23, 5, 77, 9};
    showArrayElementsV1(a, SIZE);
    showArrayElementsV2(a, SIZE);
    showArrayElementsV3(a, SIZE);
    showArrayElementsV4(a, SIZE);
    return 0;
}

//cách 1: Sử dụng chỉ số mảng
void showArrayElementsV1(int* arr, int size) {
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//cách 2: Sử dụng con trỏ
void showArrayElementsV2(int* arr, int size){
    for(int* aPtr = arr; aPtr < (arr + size); aPtr++){
        cout << *aPtr << " ";
    }
    cout << endl;
}

//cách 3: Sử dụng con trỏ
void showArrayElementsV3(int* arr, int size){
    for(int* aPtr = arr; aPtr <= &arr[size - 1]; aPtr++){
        cout << *aPtr << " ";
    }
    cout << endl;
}

//cách 4: Sử dụng i
void showArrayElementsV4(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}




