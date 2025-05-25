// this is my method

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include<iostream>
#include<vector>
using namespace std;

vector<int > remove_duplicates(vector<int> &arr){
    int n=arr.size();

    vector<int> ans;
    if(n==0){
        return ans;
    }
    ans.push_back(arr[0]);

    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            ans.push_back(arr[i]);
        }
    }

    return ans;
}

// in leetcode 

// int removeDuplicates(vector<int>& nums) {
//     int j = 1;
//     for(int i = 1; i < nums.size(); i++){
//         if(nums[i] != nums[i - 1]){
//             nums[j] = nums[i];
//             j++;
//         }
//     }
//     return j;
// }

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> result=remove_duplicates(arr);
    cout<<"final array: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

    return 0;
}