//Bài54:Sử dụng keyword this

#include <iostream>
#include <string>

using namespace std;

class FullName{
    string firstName;
    string midName;
    string lastName;

public:
    FullName(){}
    FullName(string firstName, string midName, string lastName){
        this -> firstName = firstName;
        this -> midName = midName;
        this -> lastName = lastName;
    }

    FullName& setFirstName(string firstName){
        this -> firstName = firstName;
        return *this;
    }

    FullName& setMidName(string midName){
        this -> midName = midName;
        return *this;
    }

    FullName& setLastName(string lastName){
        this -> lastName = lastName;
        return *this;
    }

string getFullName(){
    return firstName + " " + midName + " " + lastName;
    }

};

int main(){
     FullName hung;
     hung.setFirstName("Hung")
         .setMidName("Van")
         .setLastName("Tran");
     cout << hung.getFullName() << endl;
     
    return 0;
}