//VD2: Minh họa dùng do-while để thực hiện menu lựa chọn phép tính cộng trừ nhân chia hai số thực a, b

#include <iostream>

using namespace std;

int main() {
    double number1;
    double number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    auto choice = 0;
    // sử dụng do-while:
    do {
        cout << "============= MENU =============" << endl;
        cout << "1. Add two numbers." << endl;
        cout << "2. Subtract two numbers." << endl;
        cout << "3. Multiply two numbers." << endl;
        cout << "4. Divide two numbers." << endl;
        cout << "0. Exit." << endl;
        cout << "Your choice? ";
        cin >> choice;
        // tiến hành phân loại trường hợp
        switch (choice)
        {
            case 0:
                cout << "Thank for using our's service!" << endl;
                break;
            case 1:
            {
                auto sum = number1 + number2;
                cout << number1 << " + " << number2 << " = " << sum << endl;
                break;
            }
            case 2:
            {
                auto dif = number1 - number2;
                cout << number1 << " - " << number2 << " = " << dif << endl;
                break;
            }
            case 3:
            {
                auto prod = number1 * number2;
                cout << number1 << " * " << number2 << " = " << prod << endl;
                break;
            }
            case 4:
            {
                auto quot = number1 / number2;
                cout << number1 << " / " << number2 << " = " << quot << endl;
                break;
            }
            default:
                cout << "Invalid option. Please try again!" << endl;
                break;
        }
    } while (choice != 0);
}