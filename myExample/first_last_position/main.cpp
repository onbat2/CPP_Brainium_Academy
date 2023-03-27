#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 5, 6, 6, 7};
    int x = 10;
    int n = sizeof(arr)/sizeof(int);
    int first = -1;
    int last = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == x & first == -1){
            first = i;
            last = i;
        }
        if(arr[i] == x & first != -1){
            last = i;
        }
    }

    std::cout << "[" << first << ", " << last << "]";

    return 0;
}
