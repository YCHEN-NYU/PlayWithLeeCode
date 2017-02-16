#include <iostream>
#include <cmath>
#include "llist.h"
using namespace std;

int main () {
  llong number1 = 1234523974678910, number2 = 8231234237423464;
  number_list l1(number1), l2(number2);

  cout << "number1 = " << number1 << endl;

  cout << "tail to head: ";
  l1.print_tail2head();
  cout << "head to tail: ";
  l1.print_head2tail();

  cout << "number2 = " << number2 << endl;
  cout << "tail to head: ";
  l2.print_tail2head();
  cout << "head to tail: ";
  l2.print_head2tail();

  // add sum = number1 + number2




  return 0;
}
