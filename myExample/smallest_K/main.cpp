#include <iostream>

void bubbleSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            if(a[j] < a[j - 1]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 3 ,9 ,7 ,5 ,10, 15};
    int n = sizeof(arr)/sizeof(int);
    int k = 4;

    bubbleSort(arr, n);
    std::cout << "K'th smalest element is: " << arr[k - 1];
    return 0;
}
