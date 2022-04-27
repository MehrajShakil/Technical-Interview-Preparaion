#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

int main() {
    int n;
    cin >> n;

    Node* head = new Node;
    Node* List = head;

    for ( int i = 1 ; i<=n ; ++i ) {
        int x;
        cin >> x;
        List->next = new Node;
        List = List->next;
        List->data = x;
        cout << List << "\n";

    }

    bool hasCycle = false;

    Node* slow = head->next;
    Node* fast = head->next;

    while(fast->next and fast->next->next) {
        fast = fast->next->next;
        slow = slow->next;
        if(slow==fast) {
            hasCycle = true;
            break;
        }
    }

    if(hasCycle) cout << "The list is circular\n";
    else cout << "The list is not a circular linkedList\n";

}
