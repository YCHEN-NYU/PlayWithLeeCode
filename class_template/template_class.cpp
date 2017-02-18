#include <iostream>
#include <vector> 
#include <cstdlib>
#include <string> 
#include <stdexcept>

using namespace std;

template <class T>
class Stack {
 private: 
  vector<T> elements;
 public:
  void push(T const & InElement);
  void pop(); 
  T top() const;
  bool empty() const {
    return elements.empty();
  }
};

template <class T> 
void Stack<T>::push(T const & InElement) {
  elements.push_back(InElement); 
}

template <class T> 
void Stack<T>::pop() {
  if(elements.empty()) {
    throw out_of_range("Stack<>::pop(): empty stack");
  }
  elements.pop_back();
}

template <class T> 
T Stack<T>::top() const {
  if(elements.empty()) {
    throw out_of_range("Stack<>::top(): empty stack");
  }
  return elements.back();
}

int main() {
  try {
    Stack<int> intStack; 
    Stack<string> strStack;

    intStack.push(7);
    cout << intStack.top() << endl;

    strStack.push("YCHEN");
    cout << strStack.top() << endl;

    strStack.pop();
    strStack.pop();

  } catch(exception const & ex) {
    cerr << "Exception: " << ex.what() << endl;
    return -1;
  }

    return 0;
}
