/*
  Bismillahhir Rahmanir Rahim.
  Yea Rabbi Karim.
*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next = nullptr;
};


int main() {
    int n;
    cin >> n;

    Node* list1 = new Node;
    Node* list2 = new Node;
    Node* ans = new Node;
    Node* res = ans;

    /// First sorted list.
    Node* head = list1;
    for ( int i = 1 ; i<=n ; ++i ) {
        int x;
        cin >> x;
        head->next = new Node;
        head = head->next;
        head->data = x;
    }

    /// Second sorted list.
    head = list2;
    for ( int i = 1 ; i<=n ; ++i ) {
        int x;
        cin >> x;
        head->next = new Node;
        head = head->next;
        head->data = x;
    }

    /// Get our targeted list.
    list1 = list1->next;
    list2 = list2->next;
    while( list1 and list2 ) {
        if(list1->data<list2->data) {
            ans->next = new Node;
            ans = ans->next;
            ans->data = list1->data;
            list1 = list1->next;
        }
        else {
            ans->next = new Node;
            ans = ans->next;
            ans->data = list2->data;
            list2 = list2->next;
        }
    }
    while(list1) {
            ans->next = new Node;
            ans = ans->next;
            ans->data = list1->data;
            list1 = list1->next;
    }
    while(list2) {
            ans->next = new Node;
            ans = ans->next;
            ans->data = list2->data;
            list2 = list2->next;
    }
    res = res->next;
    while(res) {
        cout << res->data << " ";
        res = res->next;
    }

}
