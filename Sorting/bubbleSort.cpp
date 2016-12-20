#include <iostream>
#include <vector>
using namespace std;
void swap_element(int &first_element, int &second_element){
    int temp_element;
    temp_element = first_element; 
    first_element = second_element;
    second_element = first_element;
}
int main(){
    vector<int> list_org, list_sorted;
    list_org = {1, 30, 3, 9, 77, 82, 189};
    
    for(int i = 0; i < list_org.size(); i++) 
    {
        for(int j = i; j < list_org.size()-1; j++)
        {
            
                   }
    }

    for(auto it = list_org.begin(); it < list_org.end(); ++it)
    {
        cout << *it << "\t";
    }
    cout << endl;
}
