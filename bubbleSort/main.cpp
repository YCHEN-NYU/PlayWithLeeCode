#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list_org, list_sorted;
    list_org = {1, 3, 2, -3, 20, 288, 98, 7};
    int temp, operations = 0;
    for(int i = 0; i < list_org.size(); ++i)
    {
        for (int j = 0; j < list_org.size()-i-1; ++j) {
            if(list_org[j] > list_org[j+1])
            {
                temp = list_org[j];
                list_org[j] = list_org[j+1];
                list_org[j+1] = temp;
            }
            operations ++;
        }

    }

    for (auto it = list_org.begin(); it < list_org.end(); ++it) {
        cout << *it << '\t';
    }
    cout << endl;

    cout << "listSize = " << list_org.size() << endl;
    cout << "Operations = " << operations << endl;
    return 0;
}
