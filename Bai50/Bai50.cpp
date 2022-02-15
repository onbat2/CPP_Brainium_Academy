//Bài 50: Hàm khởi tạo, hàm hủy

#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    string name;
    int age;
    string favoriteFood;
    string color;

    Cat() {
        age = 0;
        name = "";
        favoriteFood = "";
        color = "";
    }

    Cat(string name) : name{ name } {}
    Cat(string name, int age) : name{ name }, age{ age } {}
    Cat(string name, int age, string fFood) :
            name{ name }, age{ age }, favoriteFood{ fFood } {}
    Cat(string name, int age, string fFood, string color) :
            name{ name }, age{ age }, favoriteFood{ fFood }, color{ color } {}

    void catInfo();
    void move();
    void sleep();
};

void Cat::catInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Color: " << color << endl;
    cout << "Favorite food: " << favoriteFood << endl;
}

void Cat::move() {
    cout << name << " is running on the ground." << endl;
}

void Cat::sleep() {
    cout << name << " is sleeping buzz buzz buzz...!!!" << endl;
}

int main() {
    Cat tom{ "Tom", 5, "Fish", "Black" };    // khởi tạo functional form
    Cat* catPtr = &tom;
    // truy cập phương thức:
    cout << "============== Cat infomation ==============\n";
    tom.catInfo();
    return 0;
}
