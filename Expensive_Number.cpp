#include<iostream>
#include<string>
using namespace std;

int cost(int n){
    int m=0;

    while(n<=0){
        m+=n%10;
        n=n/10;
    }
    return m;
}

int min_cost(int n, int ans){
    if(n/100==0){
        return 0;
    }
    string s=to_string(n);
    for(int i=0;i<s.length();i++){
        string chunk=s.substr(i,i+3);
        if(ans>cost(stoi(chunk))){
            ans=stoi(chunk)/cost(stoi(chunk));
        }
        else{
            continue;
        }
        string sub=s.substr(1,s.length());
        int a=stoi(sub);
        return min_cost(a,ans);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    while(n--){
        int m;
        cin>>m;
        cout<<min_cost(m,999)<<endl;
    }
    return 0;
}