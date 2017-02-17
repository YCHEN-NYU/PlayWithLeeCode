#include <iostream>
#include <string>
using namespace std;

int main() {
  student<string, int> YCHEN("YCHEN", 29); 
  YCHEN.print();
  return 0;
}


template <typename T> 
T get_value(T value) {
  return value;
}

template <typename T>
void print_value(T value) {
  cout << "value = " << value << endl;
}

template <typename T> 
T minimum(const T & lhs, const T & rhs) {
  return lhs < rhs ? lhs : rhs; 
}

template <typename T> 
class box {
private:
 int value;
public:
 box() { value = 0; }
 void set_value(T value) { this->value = value; } 
 void print() const { cout << value << endl;}
};

template <typename T1, typename T2> 
class student {
private:
 T1 name;
 T2 age;
public:
 student(T1 name, T2 age): name(name), age(age) {};
 void set_name(T1 name) { this->name = name; }
 void set_age(T2 age) { this->age = age; }
 T1 get_name() const { return name; }
 T2 get_age() const { return age; }
 void print() const { cout << "name: " << name << ", age: " << age << endl; }
};
