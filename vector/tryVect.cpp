#include <iostream>
#include <vector>
using namespace std;

void printVect(vector<int> vect)
{
    for(auto it = vect.begin(); it < vect.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main(){
    vector<int> vect;
    // Initialization
    vect = {1, 3, 2, -3, 20, 288, 98, 7};
    printVect(vect);
    return 0;
}
