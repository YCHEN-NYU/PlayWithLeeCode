//
// Created by easonphys on 2/15/17.
// Node for singly-linked list
//

#ifndef NODE_H
#define NODE_H

template <typename T> class List;

template <typename T>
class Node {
 friend class List<T>;
 public:
  T value;
  Node * next;
 public:
  Node(T value): value(value), next(nullptr) {};
  T get_value() const { return value;}
  Node * get_next() const { return next;}
  void set_value(T value) { this->value = value;}
};

#endif
