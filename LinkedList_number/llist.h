#ifndef LLIST_H
#define LLIST_H

class number_list {
private:
	struct node {
    int digit;
    node * next;
    node * prev;
    node * head;
    node * tail;
  };
public:
  node * create_node(int const digit);
	number_list(int const number);
  number_list add(number_list *l1, number_list *l2);
  number_list sub(number_list *l1, number_list *l2);
	void print_head2tail() const;
	void print_tail2head() const;

}
#endif
