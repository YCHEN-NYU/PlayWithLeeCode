//
// Created by YiYi on 1/20/17.
//

#ifndef SINGLE_LINKED_LIST_LIST_H
#define SINGLE_LINKED_LIST_LIST_H

#include <iostream>
#include "Node.h"

// forward reference
template <typename T>
std::ostream & operator<<(std::ostream os, const List<T> &lst);

template <typename T>
class List{
private:
    Node<T> *front_ptr;
    Node<T> *back_ptr;
public:
    List();
    ~List();
    void push_front(const T &value);
    void push_back(const T &value);
    bool pop_front(T &value);
    bool pop_back(T &value);
    bool is_empty() const;

friend std::ostream & operator<< <>(std::ostream & os, const List<T> & lst);

};

template <typename T>
List<T>::List(): front_ptr(0), back_ptr(0) {}

template <typename T>
List<T>::~List() {
    while (front_ptr) {
        Node<T> * temp_ptr = front_ptr;
        front_ptr = front_ptr->next_ptr;
        delete temp_ptr;
    }
}

template <typename T>
bool List<T>::is_empty() const { return front_ptr == 0;}

template <typename T>
void List<T>::push_front(const T &value) {
    Node *new_node_ptr = new Node<T>(value);
    if(is_empty()){
        front_ptr = new_node_ptr;
        back_ptr = new_node_ptr;
    }
    else {
        new_node_ptr->next_ptr = front_ptr;
        front_ptr = new_node_ptr;
    }
}

template <typename T>
void List<T>::push_back(const T &value) {
    Node *new_node_ptr = new Node<T>(value);
    if(is_empty()){
        front_ptr = new_node_ptr;
        back_ptr = new_node_ptr;
    }
    else {
        back_ptr->next_ptr = new_node_ptr;
        back_ptr = new_node_ptr;
    }
}

template <typename T>
bool List<T>::pop_front(T &value) {
    if (is_empty())
        return false;
    else if (front_ptr == back_ptr) {
        value = front_ptr->data;
        delete front_ptr;
        front_ptr = 0;
        back_ptr = 0;
    } else {
        value = front_ptr->data;
        Node<T> *temp_ptr;
        temp_ptr = front_ptr;
        front_ptr = front_ptr->next_ptr;
        delete temp_ptr;
    }
    return true;
}

template <typename T>
bool List<T>::pop_back(T &value) {
    if (is_empty())
        return false;
    else if (front_ptr == back_ptr) {
        value = front_ptr->data;
        delete front_ptr;
        front_ptr = 0;
        back_ptr = 0;
    } else {
        Node<T> * currentPtr = front_ptr;
        while (currentPtr->next_ptr != back_ptr) {
            currentPtr = currentPtr->next_ptr;
        }
        value = back_ptr->data;
        delete back_ptr;
        back_ptr = currentPtr;
        currentPtr->next_ptr = 0;
    }
    return true;
}




#endif //SINGLE_LINKED_LIST_LIST_H
