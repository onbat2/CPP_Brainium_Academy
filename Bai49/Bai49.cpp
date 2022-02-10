//Bài 49. Lớp và đối tượng

#include <iostream>
using namespace std;

class Cat{
public:
    string name;
    int age;
    string favouriteFood;
    string color;

    void move();
    void sleep();
    void catInfo();
};

void Cat::move(){
    cout << name << " is running on the ground." << endl;
}

void Cat::sleep(){
    cout << name << " is sleeping, buzz, buzz , buzz ..." << endl;
}

void Cat::catInfo(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Color: " << color << endl;
    cout << "Favourite Food: " << favouriteFood << endl;
}

int main(){
    Cat tom;
    Cat* catptr = &tom;
    tom.name = "Tom";
    tom.age = 5;
    tom.color = "Black";
    tom.favouriteFood = "Meat";
    cout << "============ Cat Information ============" << endl;
    tom.catInfo();
    tom.move();
    tom.sleep();
    //con tro
    cout << "============ Cat Information ============" << endl;
    catptr -> name = "Mun";
    catptr -> age = 3;
    catptr -> color = "Pink";
    catptr -> favouriteFood = "Rice";
    catptr -> catInfo();
    catptr -> move();
    catptr -> sleep();
    return 0;
}