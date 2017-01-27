#include <iostream>
#include "llist.h"
#include <cmath>
using namespace std;

number_list::number_list(int number) {
  // store number into the number_list
  // initial number_list
  head = NULL;
  tail = head;
  node * current_node = head->next;
  while(number != number%10) {
    current_node->digit = (number - floor(number/10)*10);
    number /= 10;
}
