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

Node* insert_1(Node* head, int new_data){
    Node* new_node=new Node(new_data);
    new_node->next=head;
    if(head!=NULL){
        head->prev=new_node;
    }
    return new_node;
}

Node* insertion_last(Node* head, int new_data){
    Node* new_node=new Node(new_data);
    if (head == NULL) {
        head = new_node;
    }
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=new_node;
    new_node->prev=curr;
    return head;
}

Node* insert_any(Node* head,int pos,int new_data){
    Node* new_node=new Node(new_data);

    if(pos==1){
        new_node->next=head;

        if(head!=NULL){
            head->prev=new_node;
        }

        head=new_node;
        return head;
    }

    Node*curr=head;
    for(int i=1;i<pos-1&&curr!=NULL;i++){
        curr=curr->next;
    }

    if(curr==NULL){
        cout<<"Position is out of bounds."<<endl;
        delete new_node;
        return head;
    }

    new_node->prev = curr;

    // Set the new of new node to next of curr
    new_node->next = curr->next;

    // Update the next of current node to new node
    curr->next = new_node;

    // If the new node is not the last node, update prev of next node to new node
    if (new_node->next != NULL)
        new_node->next->prev = new_node;

    // Return the head of the doubly linked list
    return head;

}

void print_list(Node* head){
    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->prev = head;
    head->next->next = new Node(4);
    head->next->next->prev = head->next;

    cout << "Original Linked List: ";
    print_list(head);

    cout << "After inserting Node at the front: ";
    int data1 = 1;
    head = insert_1(head, data1);

    print_list(head);

    cout << "After inserting Node at the Last: ";
    int data2 = 5;
    head = insertion_last(head, data2);
    print_list(head);

    cout << "After inserting Node at the Any Point: ";
    int data3 = 7;
    head = insert_any(head, 4, data3);
    print_list(head);

    return 0;
}