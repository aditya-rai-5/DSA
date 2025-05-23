// Traversal of Singly Linked List

#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
};

// (Iterative Approach)
// The process of traversing a singly linked list involves printing the value of each node and 
// then going on to the next node and print that node's value also and so on, till we reach the 
// last node in the singly linked list, whose next node points towards the null

void traverseList_it(Node* head){   // iterative approach
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
// Time Complexity: O(n), where n is the number of nodes in the linked list.
// Auxiliary Space: O(1)


// (Recursive Approach)
// We can also traverse the singly linked list using recursion. We start at the 
// head node of the singly linked list, check if it is null or not and print its 
// value. We then call the traversal function again with the next node passed as pointer.

void traverseList_re(Node* head){     // (Recursive Approach)
    if(head==nullptr){
        cout<<endl;
        return;
    }
    cout<<head->data<<" ";

    return traverseList_re(head->next);
}
// Time Complexity: O(n), where n is number of nodes in the linked list.
// Auxiliary Space: O(n) because of recursive stack space.


int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    traverseList_it(head);// iterative approach
    traverseList_re(head);//Recursive Approach

    return 0;
}
