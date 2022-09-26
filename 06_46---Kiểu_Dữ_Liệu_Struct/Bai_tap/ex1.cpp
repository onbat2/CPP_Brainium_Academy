/*Bài 1. Tạo một struct mô tả thông tin sinh viên gồm các trường: mã sinh viên, họ và tên, chuyên
ngành, tuổi, điểm trung bình. Viết chương trình có menu cho phép thực hiện các hành động
sau. Yêu cầu hiển thị dữ liệu dạng bảng gồm các hàng và các cột:

a) Thêm mới một sinh viên vào danh sách
b) Sắp xếp danh sách sinh viên theo điểm giảm dần
c) Hiển thị danh sách sinh viên hiện có
d) Tìm tất cả các sinh viên có điểm cao nhất hiển thị ra màn hình
e) Xóa một sinh viên khỏi danh sách theo mã sinh viên.

*/

#include <iostream>
#include <string>
#include <iomanip>
#define SIZE = 100;
using namespace std;

struct Student{
    string id;
    string name;
    string speciality;
    int age;
    float gpa;

    void fillInfo(){
        cout << "ID: ";
        getline(cin, id);
        cout << "Name: ";
        getline(cin, name);
        cout << "Speciality: ";
        getline(cin, speciality);
        cout << "Age: ";
        cin >> age;
        cout << "GPA: ";
        cin >> gpa;
        cin.ignore();
    }

    void showInfo(){
        cout << left << setw(15) << id << setw(25) << name << setw(25)
                  << speciality << setw(12) << age << setw(12) << gpa << "\n";
    }
};

void showHeader() {
    cout << left << setw(15) << "ID" << setw(25) << "Name"
        << setw(25) << "Speciality" << setw(12) << "Age"
        << setw(12) << "GPA" << "\n";
}

void sortDescending(Student* students,const int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            if(students[j].gpa > students[j - 1].gpa){
                swap(students[j], students[j - 1]);
            }
        }
    }
}

float findMaxGPA(Student* students, const int n){
    float maxGPA = students[0].gpa;
    for(int i = 1; i < n; i++){
        if(students[i].gpa > maxGPA){
            maxGPA = students[i].gpa;
        }
    }
    return maxGPA;
}

void removeAt(Student* students,int& n, const int k){
    for(int i = k; i < n; i++){
        students[i] = students[i + 1];
    }
    n--;
}

int main(){
    int n = 0;
    Student* students = new Student[100];
    int choice;
    do{
        cout << "------------------MENU------------------" << "\n" << "\n";
        cout << "1, Add a new student" << "\n";
        cout << "2, Arrange in descending order" << "\n";
        cout << "3, Show students' info list" << "\n";
        cout << "4, Find the highest GPA" << "\n";
        cout << "5, Delete a student's info" << "\n";
        cout << "0, Exit" << "\n";
        cout << "Your choice is: ";
        cin >> choice;
        cin.ignore();

        switch(choice){
        case 0:
            cout << "Thanks for using our device" << "\n";
            break;
        case 1:{
            Student s;
            s.fillInfo();
            students[n++] = s;
            break;
        }
        case 2:{
            if(n > 0){
                sortDescending(students, n);
            }else{
                cout << "Empty List" << "\n";
            }
            break;
        }
        case 3:{
            if(n > 0){
                showHeader();
                for(int i = 0; i < n; i++){
                    students[i].showInfo();
                }
            }else{
                cout << "Empty List" << "\n";
            }
            break;
        }
        case 4:{
            if(n > 0){
                float maxGPA = findMaxGPA(students, n);
                showHeader();
                for(int i = 0; i < n; i++){
                    if(students[i].gpa == maxGPA){
                        students[i].showInfo();
                    }
                }
            }else{
                cout << "Empty List" << "\n";
            }
            break;
        }
        case 5:{
            if(n > 0){
                bool isSucces = false;
                string id;
                cout << "Enter the ID: ";
                getline(cin, id);
                for(int i = 0; i < n; i++){
                    if(students[i].id.compare(id) == 0){
                        removeAt(students, n, i);
                        i--;
                        isSucces = true;
                    }
                }
                if(isSucces){
                    cout << "Removed Student's info";
                }else{
                    cout << "ERROR";
                }
            }else{
                cout << "Empty List";
            }
            break;
        }
        default:
            cout << "ERROR";
            break;
        }
    }while(choice != 0);
    delete[] students;
    return 0;
}
