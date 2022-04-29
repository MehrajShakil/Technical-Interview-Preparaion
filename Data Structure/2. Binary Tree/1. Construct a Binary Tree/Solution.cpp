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

void dfs(Node* root) {
    if(!root) return;
    cout << root->data << "\n";
    dfs(root->left);
    dfs(root->right);
    return;
}

int main() {


     /*
           1
          / \
         2   3
        / \
       4   5
     */

     Node* root = new Node(1);
     root->left = new Node(2);
     root->right = new Node(3);

     root->left->left = new Node(4);
     root->left->right = new Node(5);

     dfs(root);

}
