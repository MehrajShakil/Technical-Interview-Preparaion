#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data = 0;
    Node* next = nullptr;
};

void printList(Node* root) {
    while(root) {
        cout << root->data << " ";
        root = root->next;
    }
    return;
}

int main() {
   int n;
   cin >> n;
   Node* head = new Node;
   Node* temp = head;
   Node* ans = new Node;

   /// Creating a linked list from an array.
   for ( int i = 1 ; i<=n ; ++i ) {
    int x;
    cin >> x;
    head->data = x;
    if(i<n) {
    head->next = new Node;
    head = head->next;
    }
   }

   printf("Orginal LinkedList: ");
   printList(temp);

   printf("\nReverse LinkedList: ");

   while(temp) {
    ans->data = temp->data;
    temp = temp->next;
    Node* node = new Node;
    node->data = -1;
    node->next = ans;
    ans = node;
   }


   printList(ans->next);
}
