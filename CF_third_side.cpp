// https://codeforces.com/contest/2074/problem/B

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int solve(vector<int> &arr){
    if(arr.size()==1){
        return arr[0];
    }
    int n=arr.size();
    int ans=0;
    int i=0;
    while(n--){
        ans+=arr[i]-1;
        i++;
    }
    return ans+1;
}

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int m;
        cin>>m;
        vector<int> arr(m);
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        cout<<solve(arr)<<endl;
    }
    return 0;
}