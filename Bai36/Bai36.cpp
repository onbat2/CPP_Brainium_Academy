//Bài36: Con trỏ và truyền tham chiếu

#include <iostream>

using namespace std;

void getInput(double* length, double* width, double* height);
double cubeVolume(double* length, double* width, double* height);

int main(){
    double length;
    double width;
    double height;

    getInput(&length, &width, &height);
    auto result = cubeVolume(&length, &width, &height);
    cout << "Volume of this cube = " << result << endl;
}

void getInput(double* length, double* width, double* height){
    cout << "Enter three edges: " << endl;
    cin >> *length >> *width >> *height;
}

double cubeVolume(double* length, double* width, double* height){
    auto volume = 0.0;
    if(*length > 0 && *height > 0 && *height > 0){
        volume = (*length) * (*width) * (*height);
    }
    else{
        cout << "Please enter a valid cube edge ! " << endl;
    }
    return volume;
}