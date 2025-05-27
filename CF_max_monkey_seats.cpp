// https://codeforces.com/contest/2044/problem/C

#include<iostream>
using namespace std;

void solve(){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int ans=0,rem=0;
    ans+=min(m,a);rem+=m-min(m,a);
    ans+=min(m,b);rem+=m-min(m,b);
    ans+=min(rem,c);
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}