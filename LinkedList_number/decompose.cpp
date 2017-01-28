/* Base Conversion
 * 
 * */
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

typedef long long llong;
int main () {
    int base;
    cout << "base = ";
    cin >> base;
    llong var; //non-negative number
    cout << "var = ";
    cin >> var;
    vector<llong> vec_var;
    while (var != var%2) {
        vec_var.push_back(var%2); 
        var = var/2;
    }
    vec_var.push_back(var); 
    for(vector<llong>::iterator it = vec_var.end()-1; it != vec_var.begin() - 1; --it) 
        cout << *it;
    cout << endl;
    return 0;
}

