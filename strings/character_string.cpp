#include<iostream>
using namespace std;

int main(){
    // char str[]={'a','c','g','r','\0'};
    // char str1[]="hello";
    // cout<<str<<endl;
    // cout<<str1<<endl;

    char s[100];
    cout<<"enter char array: "<<endl;
    cin.getline(s, 100,'$');
    cout<<"output: "<<s<<endl;
    return 0;
}