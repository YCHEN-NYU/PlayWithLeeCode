#ifndef LLIST_H
#define LLIST_H

class number_list {
private:
	int digit;
	node * next;
  node * prev;
	node * head;
  node * tail;
public:
	number_list(int number);
  int add(number_list *l1, number_list *l2);
  int sub(number_list *l1, number_list *l2);
	void print();
}
#endif
