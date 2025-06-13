// https://codeforces.com/problemset/problem/231/A

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        vector<int> arr(3);
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i];
        }
        if(sum>1){
            ans+=1;
        }
    }

    cout<<ans<<endl;
    return 0;
}