// main.cpp
// LinkedList_Project

#include "LinkedList.h"
using namespace st;

int main()
{
    // step 1: create some unlinked song nodes
    node *A = new node;
    A -> song = "A new day is coming";
    A -> artist = "Vertical Horizon";

    node *B = new node;
    B -> song = "Heir Apparent";
    B -> artist = "Godsmack";

    node *C = new node;
    C -> song = "Fear of the dark";
    C -> artist = "Iron maiden";

    node *D = new node;
    D -> song = "Blue Monday";
    D -> artist = "Aimee Mann";

    node *E = new node;
    E -> song = "Country Road"
    E -> artist = "Woo";

    node *F = new node;
    F -> song = "Canon in D" ;
    F -> artist = "Pacellel";

    // step 2: Build a list of three nodes by appending to the end of list
    LinkedList mylist;
    myList.insertNode(A, 1);
    myList.insertNode(B, 1);
    myList.insertNode(C, 1);
    myList.insertNode(D, 1);
    myList.printList();

    // step 3: Insert a node into the middle of list
    myList.insertNode(E, 2);
    myList.printList();

    // step 4: Insert node at the front of the list
    myList.insertNode(F, 1);
    myList.printList();

    // step 5: Remove the last node from the list
    myList.removeNode(6);
    myList.printList();
    
    // step 6: Remove the first node from the list
    myList.removeNode(1);
    myList.printList();

    // step 7: remove a node from the middle of the list;
    myList.removeNode(3);
    myList.printList();

    return 0;
}

