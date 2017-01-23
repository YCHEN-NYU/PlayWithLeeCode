//
//  List.cpp
//  Single_Linked_List
//
//  Created by YiYi on 1/20/17.
//  Copyright © 2017 New York University. All rights reserved.
//

#include "List.hpp"

// initiate the list by creating the head node
List::List() {
    head = new node;
    head->song = "head (no songinfo.)";
    head->artist = "head (no artist info.)";
    head->next = NULL; // head->next points to NULL
}

// append a new node at the end of the list
void List::append_node() {
    node *current_node = head;
    // trace down the list until the node->next points to NULL
    while(current_node != NULL) {
        current_node = current_node->next;
    }
    
    cout << "song = ";
    cin >> current_node->song;
    cout << "artist = ";
    cin >> current_node->artist;
    current_node->next = NULL;
}



void List::print_List() const {
    node *current_node = head;
    while(current_node->next != NULL) {
        cout << current_node->song << " | " << current_node->artist << endl;
    }
}
