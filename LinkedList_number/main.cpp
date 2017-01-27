#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void decompose(int number) {
  vector<int> digits;
  while(number != number%10) {
    digits.push_back(number - floor(number/10)*10);
    number /= 10;
  }

  digits.push_back(number);

  for(auto it = digits.end()-1; it != digits.begin()-1; --it) {
    cout << *it << endl;
  } 
}

int main () {
  int number = 12345;
  decompose(number);

  return 0;
}
