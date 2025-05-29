#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node (int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
}

bool check_circular(Node* head){
    if(!head){
        return true;
    }

    Node*slow=head;
    Node* fast=head->next;
    while(fast&&fast->next){
        if(slow==fast){
            return true;
        }
        slow=slow->next;
        fast=fast->next->next;
    }

    return false;
}

// Time Complexity: O(n), We traverse the linked list in the worst case once, therefore, the time complexity here is linear.
// Auxiliary Space: O(1), We use two Node pointers, slow and fast, so the extra space is constant.

int main() {
    struct Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    check_circular(head) ? cout << "Yes\n" : cout << "No\n";

    head->next->next->next->next = head;

    isCircular(head) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}