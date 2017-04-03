#include <iostream>
#include <cstdlib>
using namespace std;

int main (int argc, char * argv[]) {
  int sum = 0;
  cout << "argc = " << argc << endl;

  if(argc > 1) {
    for (int i = 1; i < argv.size(); ++i) {
      sum += atoi(argv[i]);
      cout << "argv[" << i << "]" << argv[i] << endl;
    }
  }
  cout << "sum = " << sum << endl;

  return 0;
}
