#include<bits/stdc++.h>
using namespace std;

/// Representation of a Node.
struct Node {
    int data;
    Node* next = nullptr; /// This is called self Referential Structure.
};

Node* createLinkedList(int arr[], int n) {
    Node* root = new Node; /// Allocate a memory address.
    Node* temp = root;
    for ( int i = 1 ; i<=n ; ++i ) {
        Node* newNode = new Node;
        newNode->data = arr[i];
        root->next = newNode;
        root = newNode;
    }
    return temp;
}

void printLinkedList(Node* root) {
    while(root) {
        cout << root->data << " ";
        root = root->next;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n+1];
    for ( int i = 1 ; i<=n ; ++i ) cin >> arr[i];

    Node* root = createLinkedList(arr,n);
    printLinkedList(root->next);
}
