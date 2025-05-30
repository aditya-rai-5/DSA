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

void circular(Node*curr,Node*head){
    if(curr->next=nullptr){
        curr->next=head;
        return;
    }

    circular(curr->next,head);
}
