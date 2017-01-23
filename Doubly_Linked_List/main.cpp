#include <iostream>
#include <string>
#include "double_linked_list.h"
using namespace std;

int main () {
  List playlist = List();
  cout << "play list is empty? " << boolalpha << playlist.is_empty() << endl;
  string song1[2] = {"My heart will go on", "Celine Dion"};
  string song2[2] = {"You raise me up", "Josh Groban"};
  string song3[2] = {"May it be", "Enya"};
  string song4[2] = {"Try everything", "Shakira"};
  playlist.push_backward(1, song1);
  playlist.push_backward(2, song2);
  playlist.push_backward(3, song3);
  playlist.push_forward(2, song4);
  playlist.print_forward(); 
  cout << endl;

  playlist.delete_node(5);
  playlist.print_forward(); 

  cout << "play list is empty? " << boolalpha << playlist.is_empty() << endl;
  cout << endl;

  cout << "~List()" << endl;
  playlist.~List();
  cout << "play list is empty? " << boolalpha << playlist.is_empty() << endl;
  return 0;
}
  


