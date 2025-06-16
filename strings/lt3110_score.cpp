// https://leetcode.com/problems/score-of-a-string/description/?envType=problem-list-v2&envId=string

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length()-1;i++){
        ans+=arg(toascii(s[i+1])-toascii(s[i]));
    }
    cout<<ans<<endl;
    return 0;
}