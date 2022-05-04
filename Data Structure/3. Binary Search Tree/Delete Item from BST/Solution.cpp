#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(Node* root) {
    if(!root) return;
    cout << root->data << "\n";
    preOrder(root->left);
    preOrder(root->right);
    return;
}

Node* insertNode(Node* node, int key) {
   if(!node) return new Node(key);
   if(key<=node->data) node->left = insertNode(node->left,key);
   else node->right = insertNode(node->right,key);
}

Node* minValueNode(Node* node) {
    Node* temp = node;
    while(temp and temp->left) {
        temp = temp->left;
    }
    return temp;
}

Node* deleteNode(Node* node, int key) {
    if(!node) return node;
    if(key<node->data) node->left = deleteNode(node->left,key);
    else if(key>node->data) node->right = deleteNode(node->right,key);
    else {
        /// Case 1: Node has no child.
        if(node->left==NULL and node->right == NULL) {
            return NULL;
        }
        /// Case 2: Node has only one child.
        else if(node->left==NULL) {
            Node* temp = node->right;
            node = NULL;
            return temp;
        }
        else if(node->right==NULL) {
            Node* temp = node->left;
            node = NULL;
            return temp;
        }
        /// Case 3: Node has both child.
        else {
            /// get smallest in the right subtree.
            Node* temp = minValueNode(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right,temp->data);
        }
    }
    return node;
}

int main() {


     /*
           11
          / \
         9   12
        / \
       8  10

     */

     /*
     Node* root = new Node(11);
     root->left = new Node(9);
     root->right = new Node(12);

     root->left->left = new Node(8);
     root->left->right = new Node(10);
     */

     Node* root = NULL;
     root = insertNode(root,11);
     root = insertNode(root,12);
     root = insertNode(root,9);
     root = insertNode(root,10);
     root = insertNode(root,8);
     preOrder(root);
     int x = 9;
     Node* temp = deleteNode(root,x);
     printf("\nAfter deletion of node %d\n", x);
     preOrder(root);

}
