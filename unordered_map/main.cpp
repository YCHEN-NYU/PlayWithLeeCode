#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<int, int> tryout = {{1, 2}, {3, 4}, {5, 6}};
  for(auto const &n:tryout) {
    cout << n.first << " "  << n.second << endl;
  }
  return 0;
}