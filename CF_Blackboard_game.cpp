// https://codeforces.com/contest/2123/problem/A

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"Bob";
        }else{
            cout<<"Alice";
        }
        cout<<endl;
    }
    return 0;
}