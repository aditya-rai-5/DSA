// https://leetcode.com/problems/3sum/?envType=problem-list-v2&envId=array

/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// time limit exceeds O(n^3)
// vector<vector<int>> threeSum(vector<int> &nums){
//     vector<vector<int>> ans;
//     int n=nums.size();
//     while(n--){
//         int a=nums[n-1];
//         for(int i=n-2;i>0;i--){
//             for(int j=i-1;j>=0;j--){
//                 if(nums[i]+nums[j]+a==0){
//                     vector<int> row = {nums[j], nums[i], a};
//                     sort(row.begin(),row.end());
//                     ans.push_back(row);
//                 }
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     ans.erase(unique(ans.begin(), ans.end()), ans.end());
//     return ans;
// }


vector<vector<int>> threeSum(vector<int> &nums){
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int n=nums.size();
        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> ans=threeSum(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}