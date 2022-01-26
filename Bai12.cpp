//Toán tử ba ngôi, toán tử logic

/*
//VD1: Nhập vào ba số thực từ bàn phím và kiểm tra xem ba số đó có phải ba cạnh của 1 tam giác hay không.

#include <iostream>

using namespace std;

int main() {
    float a;
    float b;
    float c;

    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && c + a > b) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
*/


/*
//VD 2:Nhập vào giá trị là điểm trung bình môn sinh viên ở hệ 10. Cho biết điểm chữ tương ứng.

#include <iostream>

using namespace std;

int main() {
    float grade;

    cout << "Enter your GPA: ";
    cin >> grade;

    if (grade < 0 || grade > 10) {
        cout << "VALUE IS NOT VALID" << endl;
    }
    else {

        string result = "";
        if (grade >= 8.5f) {
            result = "A";
        }
        else if (grade >= 8.0f) {
            result = "B+";
        }
        else if (grade >= 7.0f) {
            result = "B";
        }
        else if (grade >= 6.5f) {
            result = "C+";
        }
        else if (grade >= 5.5f) {
            result = "C";
        }
        else if (grade >= 5.0f) {
            result = "D+";
        }
        else if (grade >= 4.0f) {
            result = "D";
        }
        else {
            result = "F";
        }
        cout << result << endl;
    }
}
*/


/*
//VD 3:Xét tính chẵn lẻ
#include <iostream>

using namespace std;

int main() {
    int number = 50;
    string result = "";
    if (number % 2 == 0) {
        result = "Even number.";
    }
    else {
        result = "Odd number.";
    }
    // tương đương với:
    result = (number % 2 == 0) ? "Even number." : "Odd number.";
    cout << result << endl;
}

 */

