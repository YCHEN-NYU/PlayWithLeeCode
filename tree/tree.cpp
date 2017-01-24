#include <iostream>
using namespace std;

struct node {
  int data;
  node * left;
  node * right;
};

class Tree {
 private:
  node * root;
  node * current_node;
  int count;
 public:
  Tree() { root->left = nullptr; root->right = nullptr; count = 0; } 

};



int main() {
  Tree simple_tree = Tree(); 
  return 0;
}
