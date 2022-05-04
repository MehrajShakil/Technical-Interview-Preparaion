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

void printTree(Node* root) {
    if(!root) return;
    cout << root->data << "\n";
    printTree(root->left);
    printTree(root->right);
    return;
}

Node* insertNode(Node* node, int key) {
   if(!node) return new Node(key);
   if(key<=node->data) node->left = insertNode(node->left,key);
   else node->right = insertNode(node->right,key);
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
     root = insertNode(root,12);
     root = insertNode(root,11);
     root = insertNode(root,9);
     root = insertNode(root,10);
     root = insertNode(root,8);
     printTree(root);

}
