#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int start=0;
    int end=n-1;
    while (end>start)
    {
        /* code */
        swap(s[start],s[end]);
        end--;
        start++;
    }
    for(char c :s){
        cout<<c;
    }
    return 0;
}