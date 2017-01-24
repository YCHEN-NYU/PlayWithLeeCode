#ifndef binary_tree_h
#define binary_tree_h

#include <iostream>
using namespace std;

struct node {
  int quantity;
  node * left;
  node * right;
};

class BTree {
 private:
  node * root;
  node * current_node;
  void insert_node(int quantity, node * leaf);
  void destroy_tree(node * leaf);
  node * search_node(int quantity, node * leaf);
  int count;
 public:
  BTree();
  ~BTree();
  void insert_node(int quantity);
  void destroy_tree();
  node * search_node(int quantity);

};



