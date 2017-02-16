//
// Created by easonphys on 2/15/17.
//

#ifndef LIST_H
#define LIST_H
#include "Node.h"

template <typename T>
class List {
 private:
  Node<T> * front_ptr;
  Node<T> * back_ptr;
 public:
  List();
  ~List();
  bool is_empty();
  void push_front(T value);




};

#endif //SINGLE_LLIST_LIST_H
