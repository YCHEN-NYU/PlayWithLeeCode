#ifndef BST_H
#define BST_H

class BST {
    private:
        struct node {
            int key;
            node * left;
            node * right;
        };
        node * root;
        void add_leaf_private(int key, node * ptr);

    public:
        BST();
        node * create_leaf(int key);

};
#endif
