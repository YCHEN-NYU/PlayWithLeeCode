// LinkedList.h
// LinkedList_Project
//
// This header file contains the Linkedlist class declarations
//
#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>
#include <string>
using namespace std;

// Node structs contain data and a pointer to the next node
// In this project, it will represent a song/artist combination

struct node{
    string song;//member song 
    string artist;//member artist name 
    node *next;//pointer to the next node
};

// LinkedList is a list of singly-linked nodes.
// In this project, it will represent a song playlist

class LinkedList
{
    private:
        // Head of the list contains no song data
        // but points to the song playlist
        node *head;
        int listLength;

    public:
        // default constructor creates the head node
        LinkedList();

        // Take a node and list position as parameters
        // Position must be between 1 and the number of data nodes
        // returns true if the operation is successful
        bool insertNode(node *newNode, int position);

        // Print each node in the list in the consecutive order
        // starting at the head and ending at the tail
        // prints list data to the console
        void printList();

       // Destructor de-allocates memory used by the list
       ~LinkedList(); 
};
#endif


