//
// Created by easonphys on 2/15/17.
//

#include "List.h"
#include <iostream>

template <typename T>
List<T>::List() {
  front_ptr = new Node<T>(0);
  front_ptr->next = nullptr;
  back_ptr = front_ptr;
}

template <typename T>
List<T>::~List() {
  Node<T> * currentNode = front_ptr;
  Node<T> * tempNode;
  while(currentNode->next != nullptr)
  {
    tempNode = currentNode->next;
    delete currentNode;
    currentNode = tempNode;
  }
  delete currentNode;
}

template <typename T>
bool List<T>::is_empty() {
  return front_ptr->next;
}

template <typename T>
void List<T>::push_front(T value){
  if(is_empty()){
    front_ptr->set_value(value);
  }
  Node<T> * newNode = new Node<T>(value);
  newNode->next = front_ptr;
  front_ptr = newNode;
}

