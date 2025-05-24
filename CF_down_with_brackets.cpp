// https://codeforces.com/contest/2110/problem/B

#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> splitBalancedParentheses(const string& s) {
    vector<string> result;
    int balance = 0, start = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') balance++;
        else if (s[i] == ')') balance--;

        if (balance == 0) {
            result.push_back(s.substr(start, i - start + 1));
            start = i + 1;
        }
    }

    return result;
}

bool destroyable(string s){
    vector<string> split=splitBalancedParentheses(s);
    if(split.size()==1){
        string a=split[0];
        for(int i=0;i<a.length();i++){
            if(a[i]==a[a.length()-1]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        bool a=destroyable(s);
        
        if(a==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}