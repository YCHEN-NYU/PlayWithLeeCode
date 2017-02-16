#include <iostream>
#include <vector>

using namespace std;

vector<int> decompose(int int_number, int base) {
  // decompose int_number into digits in the base
  cout << int_number << endl;
  vector<int> result = {};
  while(int_number/base != int_number%base) {
    result.push_back(int_number%base);
    int_number /= base;
  }
  for(vector<int>::iterator it = result.end()-1; it != result.begin()-1; --it) {
    cout << *it << " ";
  }
  cout << endl;

  return result;
}

bool is_palindrom(int in_number) {
    
}

int main() {
  int N = 1000;
  int integer = 13893;

  vector<int> temp = {};
  temp = decompose(integer, 10);

  /*for (int i = 0; i < N; ++i) {
    if(is_palindrom(i)) {
      cout << i << "is palindrom" << endl;
    }
  }*/


  return 0;

}
