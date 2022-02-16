//Bài 51. Keyword private, public và getter/setter

#include <iostream>
#include <string>

using namespace std;

class Cat {
private:
    string name;
    int age;
    string favoriteFood;
    string color;
public:
    Cat() {}
    Cat(string name) : name(name){}

    void setName(string name){ this->name = name; }
    string getName() { return name; }
    void setAge(int age){ this->age = age; }
    int getAge() { return age; }
    void setColor(string color){ this->color = color; }
    string getColor() { return color; }
    void setFavoriteFood(string favFood){ this->favoriteFood = favFood; }
    string getFavoriteFood() { return favoriteFood; }
};

int main(){
    Cat tom;
    //gọi các setter
    tom.setName("Tom");
    tom.setAge(3);
    tom.setColor("Yellow");
    tom.setFavoriteFood("Milk");
    //gọi các getter
    cout << "Pet name: " << tom.getName() << endl;
    cout << "Pet age: " << tom.getAge() << endl;
    cout << "Pet's color: " << tom.getColor() << endl;
    cout << "Pet's favorite food: " << tom.getFavoriteFood() << endl;
    return 0;
}