#include<iostream>

using  namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

int length(Node* head){
    int n=0;
    while(head!=NULL){
        n+=1;
        head=head->next;
    }
    return n;
}

int main(){
    Node* head = new Node(14);
    head->next = new Node(21);
    head->next->next = new Node(13);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(10);

    cout<<length(head)<<endl;

    return 0;
}