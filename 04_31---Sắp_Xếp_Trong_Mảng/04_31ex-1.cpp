#include <iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void showArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i <= n - 2; i++){
        for(int j = n - 1; j >= i + 1; j--){
            if(arr[j - 1] > arr[j]){
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int main(){
    int n = 10;
    int arr[] = {4, 2, 7, 1, 9, 3, 0, 6, 8, 5};

    cout << "Truoc khi sap xep: ";
    showArray(arr, n);
    cout << endl;

    cout << "Sau khi sap xep: ";
    bubbleSort(arr, n);
    showArray(arr, n);
    cout << endl;

    return 0;
}
