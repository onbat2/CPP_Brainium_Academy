//Bai16: Cấu trúc lặp while và do-while

/*VD1: Minh họa sử dụng vòng lặp while kiểm tra n có phải số đẹp không?
       Số đẹp là số mà đọc ngược đọc xuôi vẫn cho cùng kết quả.
       Ví dụ: 123321. Nếu n là số đẹp, in ra YES. Ngược lại in ra NO.
*/

#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter an integer number: " << endl;
    cin >> number;
    //Lưu lại giá trị n vào biến khác
    auto originNumber = number;
    auto revertNumber = 0;
    //Tìm số đảo của number
    while (originNumber > 0)
    {
        revertNumber = revertNumber * 10 + originNumber % 10;
        originNumber /= 10;
    }
    //Kết luận
    if (revertNumber == number){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}