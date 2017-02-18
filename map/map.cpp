#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

template <typename Map> 
void print_map(Map &InMap) {
    for(auto & element : InMap) {
        cout << element.first << ": " << element.second << endl;
    }
}

int main() {
    map<string, string> myMap;
    myMap["first name"] = "Y";
    myMap["last name"] = "CHEN";
    myMap["school"] = "NYU";
    cout << string(10, '=') << endl;
    print_map(myMap);

    cout << string(10, '=') << endl;
    map<string, string> iter(myMap.find("school"), myMap.end());
    print_map(iter);

    cout << string(10, '=') << endl;
    const map<string, int> initMap = 
    {
        { "We", 1 },
        { "are", 2 },
        { "the", 3 },
        { "World!", 4},
    };
    print_map(initMap);
    return 0;
}


