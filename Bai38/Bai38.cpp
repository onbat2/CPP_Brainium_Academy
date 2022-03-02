//Bài38: Con trỏ với keyword const

#include <iostream>

using namespace std;

#define SIZE 20

void getArrayElements(int* const arr, int& size);
void showArrayElements(const int* const arr, int const size);
void sort(int* arr, int size);


int main(){
    int arr[SIZE];
    int n;

    getArrayElements(arr, n);
    cout << "Array elements: " << endl;
    showArrayElements(arr, n);

    sort(arr, n);
    cout << "Array elements after sort ASC: " << endl;
    showArrayElements(arr, n);
    return 0;
}

//hàm nhập dữ liệu vào
void getArrayElements(int* const arr, int& size){
    cout << "Enter array size > 0: ";
    cin >> size;
    if(size > 0){
        for(int i = 0; i < size; i++){
            cin >> *(arr + i);
        }
    } else{
        cout << "ERROR";
    }
}

//hàm hiển thị ra màn hình
void showArrayElements(const int* const arr, int const size){
    for(int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

//hàm sắp xếp mảng theo thứ tự tăng dần
void sort(int* arr, int size){
    for(int i = 0; i < size; i++){
        for (int j = size - 1; j > i ; j--) {
            if (*(arr + j) < *(arr + j - 1)){
                swap(*(arr + j), *(arr + j - 1));
            }
        }
    }
}