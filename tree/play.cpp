#include <iostream>

struct node {
    int key;
    node * left;
    node * right;
};

class BTree {
    private:
        node * root;
        node * current_node;
        int count;
    public:
        BTree();
        ~BTree();
        void print_tree() const;
};

void BTree::print_tree() {
    current_node = root;
    if(current_node->left != nullptr) {
        BTree::print_tree();
    }
    else 
    {
        cout << current_node->key;
    }

}

