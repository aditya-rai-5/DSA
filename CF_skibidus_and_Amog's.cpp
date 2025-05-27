// https://codeforces.com/contest/2065/problem/A

#include<iostream>
#include<string>
using namespace std;

string plural(string s){
    int n=s.length();
    s.pop_back();
    s[n-2]='i';
    return s;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<plural(s)<<endl;
    }
    return 0;
}