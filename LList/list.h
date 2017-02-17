#ifndef LIST_H
#define LIST_H

#include "node.h"

template <typename T>
class List {
 private:
  Node<T> * front_ptr;
  Node<T> * back_ptr;
 public:
  List();
  ~List();
  void print() const;
  void push_front(const T &value);
  void push_back(const T & value);
  bool pop_front();
  bool pop_back();
  bool is_empty();
  void print_list() const;
};

#endif
