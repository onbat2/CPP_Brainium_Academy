//Bai13: Sử dụng auto keyword

#include <iostream>

using namespace std;

// khai báo biến với auto keyword
auto boolValue = true;
auto intValue = 120;
auto uIntValue = 120u;
auto longValue = 500l;
auto uLongValue = 500ul;
auto lLongValue = 89858ll;
auto ulLongValue = 5484548ull;
auto floatValue = 3.14159f;
auto doubleValue = 2.171;
auto lDoubleValue = 2.171l;
// khai báo biến với decltype()
decltype(auto) x = boolValue;
decltype(boolValue) otherBool;
decltype(intValue) otherInt;
decltype(uIntValue) otherUInt;
decltype(longValue) otherLong;
decltype(uLongValue) otherULong;
decltype(lLongValue) otherLLong;
decltype(ulLongValue) otherULLong;
decltype(floatValue) otherFloat;
decltype(lDoubleValue) otherLDouble;
// hiển thị kiểu của các biến với typeid().name()
cout << "Type of x is " << typeid(x).name() << endl;
cout << "Type of boolValue is " << typeid(boolValue).name() << endl;
cout << "Type of otherBool is " << typeid(otherBool).name() << endl;
cout << "Type of uIntValue is " << typeid(uIntValue).name() << endl;
cout << "Type of otherUInt is " << typeid(otherUInt).name() << endl;
cout << "Type of ulLongValue is " << typeid(ulLongValue).name() << endl;
cout << "Type of otherULLong is " << typeid(otherULLong).name() << endl;

/*
Type of x is bool
Type of boolValue is bool
Type of otherBool is bool
Type of uIntValue is unsigned int
Type of otherUInt is unsigned int
Type of ulLongValue is unsigned __int64
Type of otherULLong is unsigned __int64
 */
