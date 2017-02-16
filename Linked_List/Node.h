//
// Created by YiYi on 1/20/17.
//

#ifndef SINGLE_LINKED_LIST_NODE_H
#define SINGLE_LINKED_LIST_NODE_H

template <typename T> class List;

template <typename T>
class Node{
private:
    T data;
    Node *next_ptr;
public:
    Node(T d): data(d), next_ptr(nullptr) {};
    T get_data() const { return data;}
    Node *get_next_ptr() const { return next_ptr;}

friend class List<T>;
};

#endif //SINGLE_LINKED_LIST_NODE_H
