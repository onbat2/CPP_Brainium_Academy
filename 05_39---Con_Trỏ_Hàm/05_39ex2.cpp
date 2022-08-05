#include <iostream>

bool ascending(int a, int b){
    return a > b;
}

bool descending(int a, int b){
    return a < b;
}

//hàm sắp xếp
void bubble_sort(int* const prices, const int size, bool(*compare)(int, int)){
    for(int i = 0; i < size - 1; i++){
        for(int j = size - 1; j > i; j--){
            //nếu thỏa mãn điều kiện sắp xếp
            if(compare(prices[j - 1], prices[j])){
                //đổi chỗ 2 phần tử
                std::swap(prices[j], prices[j - 1]);
            }
        }
    }
}

//hiển thị kết quả
void showArray(const int* const prices, const int size){
    for(int i = 0; i < size; i++){
        std::cout << *(prices + i) << " ";
    }
    std::cout << "\n";
}

int main(){
    int prices[10] = {2, 3, 7, 0, 8, 1, 4, 6, 5, 9};
    int n = 10;
    //gọi hàm sắp xếp tăng
    bubble_sort(prices, n, ascending);
    std::cout << "Ascending order: ";
    showArray(prices, n);
    std::cout << "\n";

    //gọi hàm sắp xếp giảm
    bubble_sort(prices, n, descending);
    std::cout << "Decending order: ";
    showArray(prices, n);
    std::cout << "\n";

    return 0;
}
