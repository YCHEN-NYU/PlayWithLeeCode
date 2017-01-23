#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include <iostream>
using namespace std;
struct node {
  string song;
  string artist;
  node * prev;
  node * next;
};

class List {
 private:
  node * head;
  node * tail;
  node * current_node;
  int List_length; // length of List
 public:
  // constructor
  List();
  ~List();
  bool is_empty();
  bool push_forward(int position, string song[]); // push a new node in front of List.at(position)
  bool push_backward(int position, string song[]); // push a new node after List.at(position)
  bool delete_node(int position); // delete a node in front of List.at(position) 
  node * pop_node(int position);// TODO 
  //bool find_song(string song); // search the song name and return the index, song, artist info.
  //bool find_artist(string artist); // search the artist name and return the index, song, artist info.
  bool print_forward(); // print all indices & values in the List
};

#endif

