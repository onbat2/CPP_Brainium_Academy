#include <iostream>
#include <memory>
void showArray(int** matrix, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main(){
    int row = 3;
    int col = 4;
    int** matrix = new int* [row];
    for(int i = 0; i < row; i++){
        matrix[i] = new int[col]();
    }
    showArray(matrix, row, col);

    //thu hôi cấp phát động
    for(int i = 0; i < row; i++){
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
