#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

Node* deletion_1(Node* head){
    if(head==nullptr){
        return NULL;
    }

    Node* curr=head;
    head=head->next;
    delete curr;

    return head;
}

Node* deletion_last(Node* head){
    if (head == NULL)
        return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* curr=head;
    while (curr->next!=NULL)
    {
        curr=curr->next;
    }

    curr->prev->next = NULL;
    delete curr;
    return head;
}

Node* deletion_any(Node* head, int pos){
    if(pos<1){
        return head;
    }
    Node* curr=head;

    for(int i=0;i<pos-1&&curr!=NULL;i++){
        curr=curr->next;
    }

    // If the position is out of range
    if (curr == NULL)
        return head;

    // Update the previous node's next pointer
    if (curr -> prev != NULL)
        curr -> prev -> next = curr -> next;

    // Update the next node's prev pointer
    if (curr -> next != NULL)
        curr -> next -> prev = curr -> prev;

    // If the node to be deleted is the head node
    if (head == curr)
        head = curr -> next;

    delete curr;
    return head;
}

void printList(Node* curr) {
    while (curr != nullptr) {
      	cout << curr->data << " ";
        curr = curr->next; 
    }
}

int main(){
    Node* head = new Node(3);
    Node* second = new Node(12);
    Node* third = new Node(15);
    Node* fourth = new Node(18);

    // Linking the nodes
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;

    // printList(head);
    head = deletion_any(head,3);
    printList(head);

    return 0;
}