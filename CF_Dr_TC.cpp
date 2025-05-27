// https://codeforces.com/contest/2106/problem/A

#include<iostream>
#include<string>
using namespace std;

int pass_s1(string s, int n){
    int num=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            num=num+n-1;
        }
        if(s[i]=='0'){
            num+=1;
        }
    }
    return num;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        string s;
        cin>>s;
        cout<<pass_s1(s,m)<<endl;
    }
    return 0;
}