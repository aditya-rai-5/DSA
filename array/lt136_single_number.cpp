// https://leetcode.com/problems/single-number/description/

/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Example 3:

Input: nums = [1]

Output: 1
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int singleNumber(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=1;i<n;i+=2){
        if(nums[i-1]!=nums[i]){
            return nums[i-1];
        }
    }
    return nums[nums.size()-1];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout<<singleNumber(arr)<<endl;

    return 0;
}