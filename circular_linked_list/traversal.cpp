#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
};

void printList(Node *head) {
    if (head == nullptr)
        return;

    Node *curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;

    } while (curr != head);
    cout << endl;
}

int main() {
    Node *head = new Node(11);
    head->next = new Node(2);
    head->next->next = new Node(56);
    head->next->next->next = new Node(12);

    head->next->next->next->next = head;

    printList(head);

    return 0;
}