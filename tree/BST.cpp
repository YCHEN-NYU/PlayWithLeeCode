#include <iostream>
#include <cstdlib>
#include "BST.h"

using namespace std;

BST::BST() { 
    root = NULL;
}

BST::node * BST::create_leaf(int key) { 
    node * n = new node;
    n->key = key;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void BST::add_leaf_private(int key, node * ptr){
	if(root==NULL)
	{
		root = BST::create_leaf(key);
	}
	else {
		if(key < ptr->key)
		{
			if(ptr->left != NULL)
			{add_leaf_private(key, ptr->left);
			}
			else 
			{ptr->left = create_leaf(key);
			}
		}
		else 
			if(key > ptr->key)
			{
				if(ptr->right != NULL)
				{
					add_leaf_private(key, ptr->right);
				}
				else 
				{
					ptr->right = create_leaf(key);
				}
			}
	}
}


