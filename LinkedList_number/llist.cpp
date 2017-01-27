#include <iostream>
#include <cmath>
#include "llist.h"
using namespace std;

number_list::number_list(llong number) {
  head = new node;
  head->digit = -1;
  head->prev = nullptr;
  tail = new node;
  tail->digit = -1;
  tail->next = nullptr;
  current_node = head;

  int count = 0;
  while (number != number%10) {
    node * temp_node = new node;
    temp_node->digit = (number - floor(number/10)*10);
    current_node->next = temp_node;
    temp_node->prev = current_node;
    temp_node->next = tail;
    tail->prev = temp_node;
    current_node = temp_node;
    number /= 10;
  }
    node * temp_node = new node;
    temp_node->digit = number;
    temp_node->prev = current_node;
    current_node->next = temp_node;
    temp_node->next = tail;
    tail->prev = temp_node;
    current_node = temp_node;
}

void number_list::print_head2tail() {
  node * temp_node = head->next;
  cout << "head[ ";
  while(temp_node->next != nullptr) {
    cout << temp_node->digit;
    temp_node = temp_node->next;
  }
  cout << " ]tail" << endl;
}

void number_list::print_tail2head() {
  node * temp_node = tail->prev;
  cout << "tail[ ";
  while(temp_node->prev != nullptr) {
    cout << temp_node->digit;
    temp_node = temp_node->prev;
  }
  cout << " ]head" << endl;
}


