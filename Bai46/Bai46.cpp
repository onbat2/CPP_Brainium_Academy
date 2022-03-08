//Bài46: Kiểu dữ liệu struct

#include <iostream>
#include <string>
#include <iomanip>
#define MAX 100

using namespace std;

struct Student{
    string id;
    string fullName;
    string address;
    int age;
    float gpa;

    void fillInfo() {
        cout << "Student's ID: ";
        getline(cin ,id);
        cout << "Full name: ";
        getline(cin ,fullName);
        cout << "Address: ";
        getline(cin ,address);
        cout << "Age: ";
        cin >> age;
        cout << "GPA: ";
        cin >> gpa;
    }

    void showInfo(){
        cout << left << setw(20) << id << setw(30) << fullName
             << setw(30) << address << setw(15) << age << setw(15) << gpa << endl;
    }
};

float findMaxGpa(Student* students, const int n){
    float max = students[0].gpa;
    for (int i = 1; i < n; i++) {
        if(students[i].gpa > max) {
            max = students[i].gpa;
        }
    }
    return max;
}

void showHeader(){
    cout << left << setw(20) << "Student's ID" << setw(30) << "Full name"
         << setw(30) << "Address" << setw(15) << "Age" << setw(15) << "GPA" << endl;
}

int main(){
    int choice;
    int n = 0;
    Student* students = new Student[MAX];
    do{
        cout << "============== MENU ==============" << endl;
        cout << "1. Add a student." << endl;
        cout << "2. Show the students' list." << endl;
        cout << "3. Find the student with highest GPA." << endl;
        cout << "4. Exit." << endl;
        cout << "Your choice is: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 0:
                cout << "Thanks for using our service!" << endl;
                break;
            case 1: {
                Student s;
                s.fillInfo();
                students[n++] = s;
            }
            break;
            case 2:{
                if( n > 0){
                    cout << "============== Students' list ==============" <<endl;
                    showHeader();
                    for (int i = 0; i < n; i++) {
                        students[i].showInfo();
                    }
                }
                else {
                    cout << "<== Empty students' list ==>" << endl;
                }
            }
            break;
            case 3:{
                if (n > 0){
                    float maxGpa = findMaxGpa(students, n);
                    cout <<"============== Highest GPA ==============" << endl;
                    showHeader();
                    for (int i = 0; i < n; i++) {
                        if (students[i].gpa == maxGpa){
                            students[i].showInfo();
                        }
                    }
                }
                else{
                    cout << "<== Empty students' list ==>" << endl;
                }
            }
            break;
            default:
                cout << "ERROR" << endl;
                break;
        }
    } while (choice != 0);
    delete[] students;
    return 0;
}