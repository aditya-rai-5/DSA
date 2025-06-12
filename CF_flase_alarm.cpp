// https://codeforces.com/contest/2117/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int alarm(vector<int>& arr,int n){
    int first=0;
    int last=n-1;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            first=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==1){
            last=i;
            break;
        }
        
    }
    return first-last;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // cout<<alarm(arr,n);
        if(-alarm(arr,n)<m){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}