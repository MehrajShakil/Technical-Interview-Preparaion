#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void printTree(Node* node) {
    if(!node) return;
    cout << node->data << "\n";
    printTree(node->left);
    printTree(node->right);
}

int depth(Node* node) {
    if(!node) return 0;
    int mx1 = 1 + depth(node->left);
    int mx2 = 1 + depth(node->right);
    return max(mx1,mx2);
}

int main() {

    /*
          1
        /   \
      2       3
    /   \   /  \
   4     5  6   7

    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    puts("Print the tree");
    printTree(root);
    puts("Depth/Height of the tree");
    cout << depth(root);

}
