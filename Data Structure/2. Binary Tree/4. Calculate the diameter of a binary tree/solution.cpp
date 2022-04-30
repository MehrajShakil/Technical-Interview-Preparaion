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

int dfs(Node* node, int* diameter) {
    if(!node) return 0;
    int bame = dfs(node->left,diameter);
    int dane = dfs(node->right,diameter);
    *diameter = max(*diameter,bame+dane);
    return 1 + max(bame,dane);
}

int main() {

    /*
          1
        /   \
      2       3
     /  \
    4    5
   /    /
  9    6
 /    /
7    8

  */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->left->left = new Node(9);
    root->left->left->left->left = new Node(7);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->left->right->left->left = new Node(8);

    puts("Print the tree");
    printTree(root);
    puts("Diameter of the tree");
    int diameter = 0;
    int temp = dfs(root,&diameter);
    cout << diameter << "\n";

}
