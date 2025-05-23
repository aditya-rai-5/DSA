#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

int length(Node*head){
    int n=0;
    while(head!=nullptr){
        head=head->next;
        n+=1;
    }
    return n;
}

int length_recursion(Node*head){
    if(head==nullptr) return 0;
    return 1+length_recursion(head->next);
}

int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout<<"length: ";
    cout<<length(head)<<endl;
    cout<<length_recursion(head)<<endl;

    return 0;
}