#include <iostream>

void getInput(double* length, double* width, double* height);
double cubeVolume(double* length, double* width, double* height);

int main(){
    double length;
    double width;
    double height;

    getInput(&length, &width, &height);
    auto m_result = cubeVolume(&length, &width, &height);
    std::cout << "The result is: " << m_result << "\n";
}

void getInput(double* length, double* width, double* height){
    std::cout << "Plese enter 3 numbers: ";
    std::cin >> *length >> *width >> *height;
}

double cubeVolume(double* length, double* width, double* height){
    auto volume = 0.0;
    if(*length > 0 && *width > 0 && *height > 0){
        volume = (*length) * (*width) * (*height);
    }else{
        std::cout << "ERROR" <<"\n";
    }
    return volume;
}
