//
//  List.hpp
//  Single_Linked_List
//
//  Created by YiYi on 1/20/17.
//  Copyright © 2017 New York University. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <iostream>
using namespace std;

struct node {
    string song, artist;
    node *next;
};

class List {
private:
    node *head; // head pointer
    int length_of_list;
public:
        List(); // construct List with the head node
    void append_node();
    void print_List() const; // print all the elements in the List
    
    
};

#endif /* List_hpp */
