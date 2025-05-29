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

// Deletion at the Beginning of Singly Linked List
Node* deletion_1(Node* head){
    Node* curr=head;
    if(curr==NULL){
        return nullptr;
    }
    head=head->next;
    delete curr;
    return head;
}
// Time complexity: O(1)
// Space complexity: O(1)

// Deletion at the End of Singly Linked List
Node* deletion_last(Node* head){
    if(head==nullptr || head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node* second_last = head;
    while (second_last->next->next != nullptr) {
        second_last = second_last->next;
    }

    // Delete the last node
    delete (second_last->next);

    // Change next of second last
    second_last->next = nullptr;

    return head;
}
// Time Complexity: O(n), traversal of the linked list till its end, so the time complexity required is O(n).
// Auxiliary Space: O(1)

// Node* deletion_any(Node* head, int pos){
//     if(pos<1){
//         return head;
//     }
//     if(pos==1){
//         head=nullptr;
//         return nullptr;
//     }
//     int n=1;
//     Node* curr=head;
//     while(n<=pos){
//         curr=curr->next;
//         n++;
//     }
//     delete curr;
//     return curr;
// }

void printList(Node* curr) {
    while (curr != nullptr) {
      	cout << curr->data << " ";
        curr = curr->next; 
    }
}

int main() {
  
    // Create a hard-coded linked list:
    // 3 -> 12 -> 15 -> 18
    Node* head = new Node(3);
    head->next = new Node(12);
    head->next->next = new Node(15);
    head->next->next->next = new Node(18);
    head->next->next->next->next= new Node(43);
    head->next->next->next->next->next = new Node(25);
    head->next->next->next->next->next->next = new Node(19);
    head = deletion_1(head);
    printList(head);
    cout<<""<<endl;
    head = deletion_last(head);
    printList(head);
    cout<<""<<endl;
    // head = deletion_any(head,3);
    // printList(head);
    return 0;
}