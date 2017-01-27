#ifndef LLIST_H
#define LLIST_H
typedef long long llong;

struct node {
    llong digit;
    node * next;
    node * prev;
};

class number_list {
private:
    node * head;
    node * tail;
    node * current_node;
public:
	number_list(llong number);
  void print_tail2head();
  void print_head2tail();
  number_list add(number_list *l1, number_list *l2); // TODO
  number_list sub(number_list *l1, number_list *l2); // TODO
  number_list multiple(number_list *l1, number_list *l2); // TODO
  number_list divide(number_list *l1, number_list *l2); // TODO
};

#endif
