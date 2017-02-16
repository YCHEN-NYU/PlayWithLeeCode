//
// Created by YiYi on 2/15/17.
//

#ifndef STACK_LLIST_H
#define STACK_LLIST_H


struct node {
    int value;
    node * ptr_next;
};
class llist {

private:
//    int value;
    node * head;
public:
    llist();
    bool insert_node(int value, int position);
    bool delete_node(int value, int position);
    void print_list() const;
    ~llist();
};


#endif //STACK_LLIST_H
