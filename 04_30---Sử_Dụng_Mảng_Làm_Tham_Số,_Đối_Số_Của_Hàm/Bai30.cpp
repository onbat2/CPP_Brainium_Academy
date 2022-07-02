//Bài30: Sử dụng mảng làm tham số, đối số của hàm

#include <iostream>

using namespace std;

const size_t SIZE = 100;
bool getArrayElements(int arr[], size_t& size);
long sumAllElements(const int arr[], size_t size);
void showArrayElements(const int arr[], size_t size);

int main(){
    int arr[SIZE];
    size_t size = 0;
    bool shouldContinue = getArrayElements(arr, size);
    if (shouldContinue == true) { //size > 0
        showArrayElements(arr, size);
        cout << "\nSum of array's elements: "
             << sumAllElements(arr, size) << endl;
    }

    return 0;
}

bool getArrayElements(int arr[], size_t& size){
    int n;
    cout << "Enter number of array's element: ";
    cin >> n;
    if(n > 0){
        size = n;
        for (size_t i = 0; i < size; ++i) {
            cout << "arr[" << i << "] = ";
            cin >> arr[i];
        }
        return true;
    }else{
        cout << "Number of array 's element > 0!" << endl;
        return false;
    }
}

long sumAllElements(const int arr[], size_t size){
    long sum = 0;
    for (size_t i = 0; i < size; ++i) {
        sum += arr[i];
        return sum;
    }
}

void showArrayElements(const int arr[], size_t size){
    cout << "Array's elements: " << endl;
    for (size_t i = 0; i < size ; ++i) {
        cout << arr[i] << " ";
    }
}