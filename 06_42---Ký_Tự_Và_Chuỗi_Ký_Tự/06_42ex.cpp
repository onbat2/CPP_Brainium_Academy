#include <iostream>
#include <string.h>

//Minh họa tách từ trong chuỗi và in ra theo thứ tự xuất hiện trong câu

int main(){
    char str[200];
    const char* delim = " ,.?:;!\t";

    std::cout << "Nhap vao chuoi ky tu: ";
    std::cin.getline(str, 200);
    char* wordPtr = strtok(str, delim);

    while(wordPtr != nullptr){
        std::cout << wordPtr << "\n";
        wordPtr = strtok(nullptr, delim);
    }

    return 0;
}
