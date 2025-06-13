#include<iostream>
#include<string>
#include<algorithm>
#include <cctype>     
using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    int start=0;
    int end=s.length()-1;
    bool ans=true;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    while (end>=start)
    {
        while (start < left && !isalnum(s[start])) start++;
        // Move left if not alphanumeric
        while (start < left && !isalnum(s[left])) left--;
        if(s[end]!=s[start]){
            ans=false;
        }
        end--;
        start++;
    }
    if(ans==true){
        cout<<"true";
    }else{
        cout<<"false";
    }
    cout<<endl;
    return 0;
}