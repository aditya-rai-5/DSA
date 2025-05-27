// https://codeforces.com/contest/2074/problem/A

#include<iostream>
using namespace std;

void solve(){
    int l,r,d,u;
    cin>>l>>r>>d>>u;
    if(l==r&&r==d&&d==u){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }

    return 0;
}