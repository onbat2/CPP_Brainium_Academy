//Cấu trúc điều khiển switch.

#include <iostream>

using namespace std;

int main(){
    int choice; //lua chon
    int number1;
    int number2;

    cout << "Enter two integer numbers: ";
    cin >> number1 >> number2;

    cout << "======== Basic Caculator ========" << endl;
    cout << "0. Exit" << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;
    cout << "Your choice: ";
    cin >> choice;

    switch (choice) {
        case 0:
            cout << "Thanks you for using our app!" << endl;
            break;
            {
                case 1:
                    int sum = number1 + number2;
                cout << number1 << " + " << number2 << " = " << sum << endl;
                break;
            }
            {
                case 2:
                    int dif = number1 - number2;
                cout << number1 << " - " << number2 << " = " << dif << endl;
                break;
            }
            {
                case 3:
                    int prod = number1 * number2;
                cout << number1 << " * " << number2 << " = " << prod << endl;
                break;
            }
            {
                case 4:
                    if(number2 != 0){
                        int quot = 1.0f * number1 / number2;
                        cout << number1 << " / " << number2 << " = " << quot << endl;
                    }
                    else{
                        cout << "Error" << endl;
                    }
                break;
            }
        default:
            cout << "Invalid operation. Please try again!" << endl;
            break;
    }
}
