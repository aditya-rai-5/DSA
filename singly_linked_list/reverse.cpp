#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node (int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
};

Node* reverse_list(Node* head){
    Node* curr=head;
    Node* prev=nullptr;
    Node* next;

    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void printList(Node *node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
}

int main() {

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given Linked list:";
    printList(head);

    head = reverse_list(head);

    cout << "\nReversed Linked List:";
    printList(head);

    return 0;
}