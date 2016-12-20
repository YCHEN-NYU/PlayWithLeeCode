#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    cout << "ptr = " << ptr << endl;
    cout << "&ptr = " << &ptr << endl;
    if(ptr) 
        cout << "ptr != NULL" << endl;
    else
        cout << "ptr == NULL" << endl;
}

