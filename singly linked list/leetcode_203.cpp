// https://leetcode.com/problems/remove-linked-list-elements?envType=problem-list-v2&envId=linked-list

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

Node* remove_numbe(Node* head, int n){
    Node* temp=new Node(0);
    temp->next=head;
    Node* curr=temp;
    while(curr->next!=nullptr){
        if(curr->next->data==n){
            curr->next=curr->next->next;
        }
        else{
            curr=curr->next;
        }
    }
    return temp->next;
}

void printList(Node* head){
    while (head!=nullptr)
    {
        cout<<head->data<<" ->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    cout<<"enter the input linked list (-1 for stop)"<<endl;

    int value;

    while(true){
        cin>>value;
        if(value==-1) break;

        Node* newNode=new Node(value);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    int n;
    cout<<"enter the number to remove from linked list: "<<endl;
    cin>>n;

    cout<<"Your linked list"<<endl;
    printList(head);
    cout<<"after: ";
    printList(remove_numbe(head,n));

    return 0;
}