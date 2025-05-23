#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class Stack{
    Node* head;
    public:
    Stack(){
        this->head=nullptr;
    }

    bool isEmpty(){
        return head==nullptr;
    }

    void push(int new_data){
        Node* new_node=new Node(new_data);
        if(!new_node){
            cout<<"\nStack Overflow";
        }
        new_node->next=head;
        head=new_node;
    }
    
};