// https://codeforces.com/contest/2065/problem/C1  (m==10)

#include<iostream>
#include<vector>
using namespace std;

bool solve(int n, int m, vector<int>& a, vector<int> &b){
    if(n==1){
        return true;
    }
    a[0]=min(a[0],b[0]-a[0]);

    for(int i=1;i<n;i++){
        if(min(a[i],b[0]-a[i])>=a[i-1]){
            a[i]=min(a[i],b[0]-a[i]);
        }
        else{
            a[i]=max(a[i],b[0]-a[i]);
        }
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(1);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>b[0];
        bool ans=solve(n,m,a,b);
        if(ans==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}