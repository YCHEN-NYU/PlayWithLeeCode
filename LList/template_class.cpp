#include <iostream>
using namespace std;

template <typename NameType, typename NumberType>
class phone {
 private:
  NameType name;
  NumberType number;
 public:
    phone(NameType name, NumberType number): name(name), number(number) {};
    void print() const { cout << "Name: " << name << "\tNumber: " << number << endl; }
};

template <typename T>
T get_input() {
    T KeyboardIn;
    cout << "KeyboardIn = ";
    cin >> KeyboardIn;
    return KeyboardIn;
}

template <typename T>
T getMax(T value1, T value2) {
  return value1 > value2 ? value1 : value2;
}


int main () {
  phone<string, long> YCHEN("YCHEN", 9175451087);
  YCHEN.print();
  
  int int_number = get_input<int>();
  cout << int_number << endl;
  
  cout << getMax<int> (100, 200) << endl;
  return 0;
}
