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

Node* insert_at_1(Node* head, int new_data){
    Node* new_node=new Node(new_data);
    new_node->next=head;
    return new_node;
}
// Time Complexity: O(1)
// Auxiliary Space: O(1)

Node* insert_at_last(Node* head, int new_data){
    Node* new_node=new  Node(new_data);
    if(head==nullptr){
        return new_node;
    }

    Node* last=head;
    while(last->next!=nullptr){
        last=last->next;
    }

    last->next=new_node;

    return head;
}
// Time Complexity: O(N) where N is the length of the linked list
// Auxiliary Space: O(1)

Node* insert_at_any(Node* head,int new_data, int position){
    int n=0;
    if(position<1){
        return head;
    }
    if(position==1){
        Node* new_node=new Node(new_data);
        new_node->next=head;
        return new_node;
    }

    Node* curr=head;
    for (int i = 1; i < position - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }
    if(curr==nullptr){
        return head;
    }

    Node* newNode = new Node(new_data);

    // update the next pointers
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}
// Time Complexity: O(n), where n is the number of nodes in the linked list.
// Auxiliary Space: O(1)

// printing the list
void print_list(Node* head){
    Node* curr=head;

    while(curr!=nullptr){
        cout<<" "<<curr->data;
        curr=curr->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    // Print the original list
    cout << "Original Linked List:";
    print_list(head);

    // Insert a new node at the front of the list
    cout << "After inserting Nodes at the front:";
    int data = 1;
    head = insert_at_1(head, data);

    // Print the updated list
    print_list(head);

    // Insert a new node at the last of the list
    cout << "After inserting Nodes at the Last:";
    int data1 = 6;
    head = insert_at_last(head, data1);

    // Print the updated list
    print_list(head);

    // Insert a new node at any point of the list
    cout << "After inserting Nodes at any point:";
    int data2 = 7;
    head = insert_at_any(head, data2,3);

    // Print the updated list
    print_list(head);

    return 0;
}