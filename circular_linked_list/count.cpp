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

int length(Node* head){
    if(head==nullptr){
        return 0;
    }
    Node* curr=head;

    int count=0;
    do
    {
        count+=1;
        curr=curr->next;
    } while (curr!=head);
    
    return count;
}

int main() {
  
    // Create list: 1->2->3->4->5--->1
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head;

    cout << length(head);

    return 0;
}