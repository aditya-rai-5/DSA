#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

void Forward_traversal(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void Forward_traversal_recursive(Node* head){
    if(head==nullptr) return ;
    cout<<head->data;

    return Forward_traversal_recursive(head->next);
}

int main(){
    Node* head=new Node(4);
    head->prev=nullptr;
    head->next=new Node(3);
    head->next->prev=head;
    head->next->next=new Node(6);
    head->next->next->prev=head->next;
    head->next->next->next=new Node(9);
    head->next->next->next->prev=head->next->next;
    head->next->next->next->next=nullptr;

    Forward_traversal(head);

    return 0;
}