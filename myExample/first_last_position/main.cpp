#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 5, 6, 6, 7};
    int x = 5;
    int n = sizeof(arr)/sizeof(int);
    int first = 0;
    int last = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == x & first == 0){
            first = i;
            last = i;
        }
        if(arr[i] == x & first != 0){
            last = i;
        }
    }

    std::cout << "First Occurrence = " << first << std::endl;
    std::cout << "Last Occurence = " << last;

    return 0;
}
