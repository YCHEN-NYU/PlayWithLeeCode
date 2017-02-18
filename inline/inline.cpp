#include <iostream>
using namespace std;

template <typename T>
inline T Max(T & number1, T & number2) {
  return number1 > number2 ? number1: number2;
}

int main () {
 double number1 = 1.0, number2 = 2.0;
 cout << "bigger number = " << Max(number1, number2) << endl; 
 return 0; 
}


