#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

template <typename T> class List;

template <typename T> 
class Node {
 friend class List<T>;
 private:
  T value;
  Node * next;
 public:
  Node(): value(0), next(nullptr) {};
  T get_value() const { return value; }
  void set_value(T value) { this->value = value; }
  void print() const { cout << "value = " << value << endl; }
};

#endif

