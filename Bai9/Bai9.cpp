// Bài 9: Cấu trúc điều khiển if-else

#include<iostream>

using namespace std;

int main() {
    float gpa; // điểm trung bình môn
    cout << "Enter your gpa: ";
    cin >> gpa;
    string rank = ""; // kết quả xếp loại
    if (gpa >= 9.0f) { // điều kiện xuất sắc
        rank = "Excellent!";
    } else if(gpa >= 8.0f) { // đk loại giỏi
        rank = "Very Good";
    }
    else if (gpa >= 7.0) { // đk loại khá
        rank = "Good";
    }
    else if (gpa >= 5.5f) { // đk loại trung bình
        rank = "Average";
    }
    else if (gpa >= 4.0) { // đk loại TB yếu
        rank = "Below average";
    }
    else { // yếu
        rank = "Weak";
    }
    // hiển thị kết quả
    cout << "Your GPA: " << gpa << endl
         << "Rank: " << rank << endl;
}
