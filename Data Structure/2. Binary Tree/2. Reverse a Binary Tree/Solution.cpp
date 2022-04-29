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

void print(Node* root) {
    if(!root) return;
    cout << root->data << "\n";
    print(root->left);
    print(root->right);
    return;
}

Node* invert(Node* root) {
    if(!root) return root;
    Node* temp = invert(root->right);
    root->right = invert(root->left);
    root->left = temp;
    return root;
}

int main() {


     /*
           1
          /  \
         2    3
        / \  / \
       4   5 6  7

            1
          /  \
         3    2
        / \  / \
       7   6 5  4
     */

     Node* root = new Node(1);
     root->left = new Node(2);
     root->right = new Node(3);

     root->left->left = new Node(4);
     root->left->right = new Node(5);
     root->right->left = new Node(6);
     root->right->right = new Node(7);

     cout << "Before Invert\n";
     print(root);
     invert(root);
     cout << "After Invert\n";
     print(root);

}
