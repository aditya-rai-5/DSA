// https://codeforces.com/contest/71/problem/A

#include<iostream>
#include<iostream>

using namespace std;

string too_long_word(string s){
    string sub_str= s.substr(1, s.length() - 2);
    return s[0]+to_string(sub_str.length())+s[s.length()-1];
}

int main(){
    int n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;
        if(s.length()<=10){
            cout<<s<<endl;
        }
        else{
            cout<<too_long_word(s)<<endl;
        }
    }
    return 0;
}