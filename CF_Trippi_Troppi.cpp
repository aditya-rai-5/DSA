// https://codeforces.com/contest/2094/problem/A

#include<iostream>
#include<string>

using namespace std;

string first_ch(string s){
    string ans;
    bool newWord = true;
    for (char c : s) {
        if (newWord && c != ' ') {
            ans+=c;
            newWord = false;
        }
        if (c == ' ') {
            newWord = true;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    while(n>=0){
        string s;
        getline(cin,s);
        cout<<first_ch(s)<<endl;
        n--;
    }
    return 0;
}