#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// overload << for printing
template <typename T>
ostream & operator<<(ostream &out, const list<T> & InList) {
  for(const auto & element : InList) out << element << " ";
  return out;
}

int main () {
  list<int> NumberList = {1, 2, 3, 4, 5};
  cout << "constructor: ";
  cout << NumberList << endl; 

  NumberList.push_back(6);
  cout << "push_back: "; 
  cout << NumberList << endl; 

  NumberList.pop_back();
  cout << "pop_back: "; 
  cout << NumberList << endl; 

  NumberList.push_front(0);
  cout << "push_front: "; 
  cout << NumberList << endl; 

  NumberList.pop_front();
  cout << "pop_front: "; 
  cout << NumberList << endl; 

  NumberList.insert(++NumberList.begin(), -1);
  cout << "insert@ ++begin() : ";
  cout << NumberList << endl; 
  cout << "size of NumberList = " << NumberList.size() << endl;

  int target = 2;
  cout << "remove " << target << endl;
  NumberList.remove(target);
  cout << NumberList << endl; 
  cout << "size of NumberList = " << NumberList.size() << endl;

  cout << "List is empty? " << boolalpha << !NumberList.empty() << endl;
  
  // get the value from the front and back of the list<T>
  cout << "NumberList.front() = " << NumberList.front() << endl; 
  cout << "NumberList.back() = " << NumberList.back() << endl; 

  return 0;
}
