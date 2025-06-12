// https://codeforces.com/contest/2117/problem/B

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=2;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<1;
        cout<<endl;
    }

    return 0;
}