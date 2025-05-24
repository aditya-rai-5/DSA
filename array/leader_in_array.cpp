#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> leader(vector<int>& arr){
    vector<int> ans;
    int l=arr[arr.size()-1];
    ans.push_back(l);
    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]>l){
            l=arr[i];
            ans.push_back(l);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result= leader(arr);
    for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
    }

    return 0;
}