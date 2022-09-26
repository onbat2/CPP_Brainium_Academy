#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX = 100;

struct Student {
    string id;
    string fullName;
    string address;
    int age;
    float gpa;

    void fillInfo() {
        cout << "Ma sinh vien: ";
        getline(cin, id);
        cout << "Ho va ten: ";
        getline(cin, fullName);
        cout << "Dia chi: ";
        getline(cin, address);
        cout << "Tuoi: ";
        cin >> age;
        cout << "Diem TB: ";
        cin >> gpa;
    }

    void showInfo() {
        cout << left << setw(15) << id << setw(25) << fullName
            << setw(25) << address << setw(12) << age << setw(12) << gpa << endl;
    }
};

float findMaxGpa(Student* students, const int n) {
    float max = students[0].gpa;
    for (int i = 1; i < n; i++)
    {
        if (students[i].gpa > max) {
            max = students[i].gpa;
        }
    }
    return max;
}

void showHeader() {
    cout << left << setw(15) << "Ma SV" << setw(25) << "Ho va ten"
        << setw(25) << "Dia chi" << setw(12) << "Tuoi"
        << setw(12) << "Diem TB" << endl;
}

int main()
{
    int choice;
    int n = 0;
    Student* students = new Student[MAX];
    do
    {
        cout << "================= MENU =================\n";
        cout << "1. Them moi sinh vien vao danh sach\n";
        cout << "2. Hien thi danh sach sinh vien hien co\n";
        cout << "3. Tim sinh vien co gpa cao nhat\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "Xin moi chon: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Xin chao va hen gap lai!\n";
            break;
        case 1: {
            Student s;
            s.fillInfo();
            students[n++] = s;
            break;
        }
        case 2: {
            if (n > 0) {
                cout << "================ DANH SACH SINH VIEN ================\n";
                showHeader();
                for (int i = 0; i < n; i++)
                {
                    students[i].showInfo();
                }
            }
            else {
                cout << "<== Danh sach sinh vien rong ==>\n";
            }

            break;
        }
        case 3: {
            if (n > 0) {
                float maxGpa = findMaxGpa(students, n);
                cout << "================ CAC SINH VIEN CO GPA CAO NHAT ================\n";
                showHeader();
                for (Student* sPtr = students; sPtr <= &students[n - 1]; sPtr++)
                {
                    if (sPtr->gpa == maxGpa) {
                        sPtr->showInfo();
                    }
                }
            }
            else {
                cout << "<== Danh sach sinh vien rong ==>\n";
            }
            break;
        }
        default:
            cout << "Sai chuc nang. Vui long kiem tra lai!\n";
            break;
        }
    } while (choice != 0);
    delete[] students;

    return 0;
}
