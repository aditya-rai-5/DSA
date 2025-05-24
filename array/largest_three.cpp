#include<iostream>
#include<vector>
using namespace std;

vector<int> largest_three(vector<int> &arr){
    vector<int> ans(3,-1);
    for (int i = 0; i < arr.size(); ++i) {
        int val = arr[i];
        if (val > ans[0]) {
            ans[2] = ans[1];
            ans[1] = ans[0];
            ans[0] = val;
        } else if (val > ans[1] && val != ans[0]) {
            ans[2] = ans[1];
            ans[1] = val;
        } else if (val > ans[2] && val != ans[1] && val != ans[0]) {
            ans[2] = val;
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

    vector<int> result=largest_three(arr);
    cout<<"the largest three number are: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}