#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> NumberSet = {1, 2, 4, 3, 4};
    auto it = NumberSet.begin();
    cout << it.first << endl;
    return 0;
}
