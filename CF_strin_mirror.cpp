// https://codeforces.com/contest/2044/problem/B

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string mirror(string s){
    int len=s.length();
    for(char &c:s){
        if(c=='p'){
            c='q';
        }
        else if(c=='q'){
            c='p';
        }
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<mirror(s)<<endl;
    }

    return 0;
}