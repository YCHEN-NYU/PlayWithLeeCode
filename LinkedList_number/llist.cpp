#include <iostream>
#include "llist.h"
#include <cmath>
using namespace std;

node * number_list::create_node(int const digit) {
  node * new_node = new node;
  new_node->prev = NULL;
  new_node->next = NULL;
  new_node->digit = digit;
  return new_node;
} 



// store number into class number_list
number_list::number_list(int number) {
  head = NULL;
  tail = head;
  node * current_node = head->next;
  while(number != number%10) {
    current_node->digit = (number - floor(number/10)*10);
    number /= 10;
}
