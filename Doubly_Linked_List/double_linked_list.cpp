#include "double_linked_list.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
List::List() {
  head = new node;
  head->song = "Name";
  head->artist = "Artist";
  head->prev = nullptr;
  head->next = nullptr;

  tail = new node;
  tail->song = string(20,'-');
  tail->artist = string(20,'-');
  tail->prev = nullptr;
  tail->next = nullptr;
  List_length = 0;
}

List::~List() {
  node * temp_node = head;
  while(head->next!=nullptr) {
    head = temp_node->next;
    delete temp_node;
    temp_node = head;
  } 
}

bool List::is_empty() {
  return (head->next == nullptr);
}

// push a new node before List.at(position) 
bool List::push_forward(int position, string song[]) { 
  if(position > List_length || position < 0) {
    cout << "error: position out of range" << endl;
    return false;
  }
  else {
    if(is_empty()) {
      node * new_node = new node;
      new_node->song = song[0];
      new_node->artist = song[1];

      head->next = new_node;
      new_node->prev = head;
      new_node->next = tail;
      tail->prev = new_node;
      ++List_length;
      return true;
    } 
    else {
      int current_index = 0; 
      current_node = head;
      while(current_index < position - 1)
      {
        current_node = current_node->next;
        ++current_index;
      }
      node * new_node = new node;
      new_node->song = song[0];
      new_node->artist = song[1];

      node * temp_node = current_node->next;
      current_node->next = new_node;
      new_node->prev = current_node;
      new_node->next = temp_node;
      temp_node->prev = new_node;

      ++List_length;
      return true;
    }
  }
}

// push a new node after List.at(position)
bool List::push_backward(int position, string song[]) {
  
  if(position > List_length + 1 || position < 0) {
    cout << "error: position out of range" << endl;
    return false;
  }
  else {
      if(is_empty()) { 
        node * new_node = new node;
        new_node->song = song[0];
        new_node->artist = song[1];

        head->next = new_node;
        new_node->prev = head;
        new_node->next = tail;
        tail->prev = new_node;
        ++List_length;
        return true;
      }
      else {
        int current_index = 0; 
        current_node = head;
        while(current_index < position -1)
        {
          current_node = current_node->next;
          ++current_index;
        }
        node * new_node = new node;
        new_node->song = song[0];
        new_node->artist = song[1];

        node * temp_node = current_node->next;
        current_node->next = new_node;
        new_node->prev = current_node;
        new_node->next = temp_node;
        temp_node->prev = new_node;
        ++List_length;
        return true;
      }
  } 
}

bool List::delete_node(int position) {
  if(position > List_length || position < 0){
    cout << "error: position out of range" << endl;
    return false;
  }
  else {
    if(is_empty()) {
      cout << "error: .delete_node(int) is invalid for empty List" << endl;
      return false;
    }
    else {
      int current_index = 0;
      current_node = head;
      while(current_index < position -1) {
        current_node = current_node->next;
        ++current_index;
      }
      node * temp_prev_node, * temp_next_node;
      temp_prev_node = current_node;
      temp_next_node = (current_node->next)->next;
      delete current_node->next;
      temp_prev_node->next = temp_next_node;
      temp_next_node->prev = temp_prev_node;
      --List_length;
      return true;
    }
  }
}

bool List::print_forward() {
  if(is_empty()) {
    cout << "error: empty List" << endl;
    return false;
  }
  else {
    cout << "List length = " << List_length << endl;
    node * current_node = head;
    int current_index = 0;
    while(current_node != nullptr) {
      cout << left  << setw(3) << left << current_index
           << left << setw(3) << " | "
           << left << setw(20) << left << current_node->song
           << left << setw(3) << " | "
           << left << setw(20) << current_node->artist << endl;
      ++current_index;
      current_node = current_node->next;
    }
    return true;
  }
}

