#include <iostream>
#include <cstdlib>
using namespace std;

struct node {
  int data;
  node * next;
  node * prev;
};

void print_forward(node *head);
void print_backward(node *tail);


main () {
  node * head;
  node * tail;
  node * new_node;

  new_node = new node;
  new_node->data = 1;
  new_node->prev = nullptr;
  head = new_node;
  tail = new_node;

  new_node = new node;
  new_node->data = 2;
  new_node->prev = tail;
  tail->next = new_node;
  tail = new_node;

  new_node = new node;
  new_node->data = 3;
  new_node->prev = tail;
  tail->next = new_node;
  tail = new_node;

  new_node = new node;
  new_node->data = 4;
  new_node->prev = tail;
  tail->next = new_node;
  tail = new_node;

  tail->next = nullptr;

  cout << "Print forward: " << endl;
  print_forward(head);
  cout << "Print backward: " << endl;
  print_backward(tail);

}
void print_forward(node *head) {
  node * temp = head;
  while(temp != nullptr) {
    cout << temp->data << endl;
    temp = temp->next;
  }
}


void print_backward(node *tail) {
  node * temp = tail;
  while(temp != nullptr) {
    cout << temp->data << endl;
    temp = temp->prev;
  }
}
