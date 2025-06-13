// https://codeforces.com/problemset/problem/282/A

#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        string s;
        cin>>s;

        if(s.find('+')!= string::npos){
            ans++;
        }else{
            ans--;
        }
    }
    cout<<ans<<endl;

    return 0;
}