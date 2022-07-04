#include <iostream>

using namespace std;

void showArray(int arr[], int n);
void showResult(int x, int index);
int linearSearch(const int arr[], int n, int x);
int binarySearch(const int arr[], int left, int right, int x);


void showArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void showResult(int x, int index){
    if(index == -1){
        cout << "ERROR" << endl;
    }else{
        cout << "Found " << x << " at index " << index << "." << endl;
    }
}

int linearSearch(const int arr[], int n, int x){
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
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

int binarySearch(const int arr[], int left, int right, int x){
    if(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] < x){
            return binarySearch(arr, mid + 1, right, x);
        }else{
            return binarySearch(arr, left, mid - 1, x);
        }
    }
    return -1;
}

int main(){
    int n = 10;
    int arr[] = {3, 16, 49, 34, 8, 100, 24, 46, 55, 7};
    cout << "Mang ban dau: ";
    quickSort(arr, 0, n - 1);
    showArray(arr, n);

    int x = 34;
    int y = 100;
    int z = 5;
    int t = 49;

    int xIndex = linearSearch(arr, n, x);
    int yIndex = binarySearch(arr, 0, n - 1, y);
    int zIndex = linearSearch(arr, n, z);
    int tIndex = binarySearch(arr, 0, n - 1, t);

    showResult(x, xIndex);
    showResult(y, yIndex);
    showResult(z, zIndex);
    showResult(t, tIndex);
}







