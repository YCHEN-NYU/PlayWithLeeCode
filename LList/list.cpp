#include <iostream>
#include "list.h"
#include "node.h"
using namespace std;

template <typename T>
List<T>::List() {
  front_ptr = new Node<T>();
  back_ptr = front_ptr;
}

template <typename T>
bool List<T>::is_empty() {
  return (front_ptr->next == nullptr);
}

template <typename T>
void List<T>::print_list() const {
  Node<T> * tempNode = front_ptr;
  while(tempNode != nullptr) {
    cout << tempNode->value << endl;
    tempNode = tempNode->next;
  }
}

