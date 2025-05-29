#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node (int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
};

int middle(Node*head){
    Node* curr=head;
    int length=0;

    while(curr){
        length++;
        curr=curr->next;
    }
    int mid_index=length/2;
    while(mid_index--){
        head=head->next;
    }

    return head->data;
}
// Time Complexity: O(2 * n) = O(n) where n is the number of nodes in the linked list.
// Auxiliary Space: O(1)

int middle_2(Node* head){
    Node* fast=head;
    Node* slow=head;

    while (fast!=NULL && fast->next=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}
// Time Complexity: O(n), where n is the number of nodes in the linked list.
// Auxiliary Space: O(1)

int main() {

    // Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40 -> 50 -> 60 
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    cout << middle(head)<<endl;
    cout << middle_2(head)<<endl;
    
    return 0;
}