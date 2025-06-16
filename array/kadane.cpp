#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_subarray_sum(vector<int>& nums){
    int curr_sum=0;
    int ans=INT_MIN;
    for(int i=0;i<nums.size();i++){
        curr_sum+=nums[i];
        ans=max(curr_sum,ans);
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}