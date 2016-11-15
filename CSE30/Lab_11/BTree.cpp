#include <iostream>
#include "BTree.h"
using namespace std;

BTree::BTree() {
    //initialize root
  root = NULL;
}

BTree::~BTree() {
    //call destroy_tree()
  destroy_tree();
}

void BTree::insert(int key) {
  if (root == NULL) {
    //create new node for root
    root = new Node;
    //Todo
    root->key_value = key;
    cout << "Added " << key << " to key_value of root" << endl;
    root->left = NULL;
    cout << "Init root's left node to NULL" << endl;
    root->right = NULL;
    cout << "Init root's right node to NULL" << endl;
  } else {
    //call private insert
    cout << "Inserting to a leaf...";
    insert(key, root);
  }
}

void BTree::insert(int key, Node *leaf) {
  if (key < leaf->key_value) {
    if (leaf->left == NULL) {
      //create a new node for left node
      leaf->left = new Node;
      leaf->left->key_value = key;
      cout << "on the left" << endl;
      leaf->left->left = NULL;
      leaf->left->right = NULL;
      
    } else {
        insert(key, leaf->left);
    }
  } else {
      if (leaf->right == NULL) {
        leaf->right = new Node;
	leaf->right->key_value = key;
	cout << "on the right" << endl;
	leaf->right->left = NULL;
	leaf->right->right = NULL;
      } else {
	  insert(key, leaf->right);
      }
  }
}
Node *BTree::search(int key) {
  return search(key, root);
}

Node *BTree::search(int key, Node *leaf) {
  if (leaf == NULL) {
    return NULL;
  } else {
      //if key == leaf->key_value, return leaf
      if (key == leaf->key_value) return leaf;
      //if key < leaf->key_value, search left node
      if (key < leaf->key_value) search(key, leaf->left);
      //if key > leaf->key_value, search right node
      if (key > leaf->key_value) search(key, leaf->right);
  }
}

void BTree::destroy_tree() {
  destroy_tree(root);
}

void BTree::destroy_tree(Node *leaf) {
  if (leaf != NULL) {
    //destroy left child
    destroy_tree(leaf->left);
    //destroy right child
    destroy_tree(leaf->right);
    delete leaf;
  }
}
