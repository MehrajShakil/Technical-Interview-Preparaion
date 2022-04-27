#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

int main() {
   int n;
   cin >> n;
   Node* list = new Node;
   Node* head = list;
   Node* root = head;

   for ( int i = 1 ; i<=n ; ++i ) {
       int x;
       cin >> x;
       list->next = new Node;
       list = list->next;
       list->data = x;
   }

   head = head->next;
   Node* prev = head;
   head = head->next;

   while(head) {
        if(prev->data != head->data) {
              prev->next = head;
              prev = head;
        }
        head = head->next;
   }


   prev->next = NULL;
   root = root->next;

   while(root) {
    cout << root->data << " ";
    root = root->next;
   }



}
