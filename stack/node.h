//
// Created by YiYi on 2/15/17.
//

#ifndef STACK_NODE_H
#define STACK_NODE_H


template <typename T> class node {
private:
    T value;
    node * next_ptr;
public:
    node(T d): value(d), next_ptr(nullptr) {};
    


};



#endif //STACK_NODE_H
