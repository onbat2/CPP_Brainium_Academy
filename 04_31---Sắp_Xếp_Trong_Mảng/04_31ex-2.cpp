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

int partition(int arr[], int left, int right){
    int pivot = arr[right];  //pivot: mỏ neo
    int i = left;
    for(int j = left; j <= right; j++){
        if(arr[j] < pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}

void quickSort(int arr[], int leftIndex, int rightIndex){
    if(leftIndex < rightIndex){
        int p = partition(arr, leftIndex, rightIndex);
        quickSort(arr, leftIndex, p - 1);
        quickSort(arr, p + 1, rightIndex);
    }
}

int main(){
    int n = 10;
    int arr[] = {3, 6, 0, 2, 1, 8, 7, 9, 4, 5};

    cout << "Truoc khi sap xep: ";
    showArray(arr, n);
    cout << endl;

    quickSort(arr, 0, n - 1);
    cout << "Sau khi sap xep: ";
    showArray(arr, n);
    cout << endl;
}
