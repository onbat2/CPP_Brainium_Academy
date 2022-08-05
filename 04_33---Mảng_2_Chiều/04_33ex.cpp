#include <iostream>

#define M 100
#define N 100

void getMatrix(int matrix[M][N], int& m, int& n);
void showMatrix(int matrix[M][N], int m, int n);

int main(){
    int m, n;
    int matrix[M][N];
    getMatrix(matrix, m, n);
    if(m > 0 && n > 0){
        std::cout <<"The result is: " << "\n";
        showMatrix(matrix, m, n);
    }else{
        std::cout << "ERROR" << std::endl;
    }
    return 0;
}

void getMatrix(int matrix[M][N], int& m, int& n){
    std::cin >> m >> n;
    if(m > 0 && n > 0){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j ++){
                std:: cin >> matrix[i][j];
            }
        }
    }
}

void showMatrix(int matrix[M][N], int m, int n){
    std::cout << m << " " << n << "\n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}
