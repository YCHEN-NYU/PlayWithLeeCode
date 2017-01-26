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
        //void add_leaf_private(int key, node * ptr);

    public:
        BST();
        ~BST();
        node * create_leaf(int key);
        bool insert_node(int key, node * ptr);
        bool delete_node(node * ptr);
        node * search(int key);
        void print_tree() const;
};

#endif
