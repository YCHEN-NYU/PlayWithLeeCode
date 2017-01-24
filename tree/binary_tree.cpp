#include "binary_tree.h"
using namespace std;

// Constructor for the BTree, set up the root for the BTree
BTree::BTree() {
  root = new node;
  root->left = nullptr;
  root->right = nullptr;
  count = 0;
  current_node = root;
}

// destructor: TODO
BTree::~BTree() {
  node * temp_node = root;

}

// insert a node by the quantity
BTree::insert_node(int quantity) { }
