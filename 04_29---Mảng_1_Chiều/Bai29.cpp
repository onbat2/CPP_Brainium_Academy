//Bài29: Mảng 1 chiều

#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 5
#define NAMES_SIZE 40
#define GRADES_SIZE 20

int main(){
    int numbers[SIZE];
    char nameStudent[NAMES_SIZE];
    float grades[GRADES_SIZE];

    for (int i = 0; i < SIZE; ++i) {
        cout << "Nhap gia tri cho phan tu thu " << i << ": ";
        cin >> numbers[i];
    }
    cout << left << setw(10) << "Vi tri" << setw(10) << "Gia tri" << endl;

    for (int i = 0; i < SIZE; ++i) {
        cout << left << setw(10) << i << setw(10) << numbers[i] << endl;
    }

    return 0;
}