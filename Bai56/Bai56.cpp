#include <iostream>
#include "Time.h"

using namespace std;

int main(){
    const Time noon(12,0,0);
    cout << "Noon time: ";
    noon.showTimeUniversal();
    Time wakeUp(7,5,20);
    cout << "Wake up time: ";
    wakeUp.showTimeUniversal();
    return 0;
}