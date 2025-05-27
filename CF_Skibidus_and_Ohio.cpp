// https://codeforces.com/contest/2065/problem/B

#include<iostream>
#include<string>
using namespace std;

int min_length(string s){
    if(s.length()==1){
        return 1;
    }
    int ans=s.length();
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            return 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<min_length(s)<<endl;
    }

    return 0;
}