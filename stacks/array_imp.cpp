#include<iostream>
#include<vector>
using namespace std;

class Stack{
    int top,cap;
    int *a;

    public:
    Stack(int cap){
        this->cap=cap;
        top=-1;
        a=new int[cap];
    }

    ~Stack(){
        delete[] a;
    }

    bool push(int x){
        if(top>=cap-1){
            cout<<"Stack is full\n";
            return false;
        }
        a[++top]=x;
        return true;
    }
    int pop(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return a[top--];
    }

    int peek(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return a[top];
    }

    bool isEmpty(){
        return top<0;
    }
};

int main(){
    cout<<"fixed size array"<<endl;
    Stack s(5); // Fixed size stack
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " popped from stack\n"; 

    cout << "Top element is: " << s.peek() << endl; 

    cout << "Elements present in stack: "; 
    while (!s.isEmpty()) { 
        cout << s.peek() << " "; 
        s.pop(); 
    } 

    cout<<"\nImplementation using Dynamic Sized Array"<<endl;// no need to define a class for this

    vector<int> k;
    k.push_back(10);
    k.push_back(20);
    k.push_back(30);
    cout<<k.back()<<" popped from stack"<<endl;
    k.pop_back();
    cout << "Top element is: " << k.back() << endl;

    cout << "Elements present in stack: ";
    while (!k.empty()) {
        cout << k.back() << " ";
        k.pop_back();
    }

    return 0; 
}