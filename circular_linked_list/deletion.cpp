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

Node* deletion(Node* last, int pos) {
    if (last == nullptr || pos <= 0)
        return last;

    Node* temp = last->next;  // Head node
    // If there is only one node
    if (temp == last && pos == 1) {
        delete temp;
        return nullptr;
    }

    // Deleting head (1st node)
    if (pos == 1) {
        Node* head = last->next;
        last->next = head->next;
        delete head;
        return last;
    }

    // Deleting other than head
    Node* curr = last->next;
    for (int i = 1; i < pos - 1 && curr->next != last->next; ++i) {
        curr = curr->next;
    }

    // Check if position was valid
    if (curr->next == last->next) {
        cout << "Position out of bounds.\n";
        return last;
    }

    Node* to_delete = curr->next;
    curr->next = to_delete->next;

    // If deleting last node, update last
    if (to_delete == last)
        last = curr;

    delete to_delete;
    return last;
}

void printList(Node* last) {
   if(last == NULL) return;

    Node *head = last->next;
    while (true){
        cout << head->data << " ";
        head = head->next;
        if (head == last->next) break;
    }
    cout << endl;
}

int main() {
    // Create circular linked list: 2, 3, 4
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node* last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    printList(last);

    int key = 3;
    last = deleteion(first, 3);

    cout << "List after deleting node: ";
    printList(last);

    return 0;
}