#include <iostream>
using namespace std;
template <typename T>
struct node {
    T number_of_words;
    node *next;
};

int main() {
    node<int> *page1 = new node<int>;
    page1->number_of_words = 100;
    node<int> *page2 = new node<int>;
    page2->number_of_words = 200;
    node<int> *page3 = new node<int>;
    page3->number_of_words = 300;
    page1->next = page2;
    page2->next = page3;
    page3->next = NULL;

    cout << "page1->number_of_words = " << page1->number_of_words << endl;
    cout << "page2->number_of_words = " << page2->number_of_words << endl;
    cout << "page3->number_of_words = " << page3->number_of_words << endl;

    cout << "(page1->next)->number_of_words = " << (page1->next)->number_of_words << endl;
    cout << "(page2->next)->number_of_words = " << (page2->next)->number_of_words << endl;
//    cout << "(page3->next)->number_of_words = " << (page3->next)->number_of_words << endl;

    delete page1, page2, page3;
    return 0;
}