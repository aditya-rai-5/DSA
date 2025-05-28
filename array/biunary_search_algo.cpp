/*
-->condition to apply binary search algorithms in data structure--
----->data must be sorted.
----->Access to any element of the data structure should take constant time.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bi_search(vector<int>& arr, int key){
    sort(arr.begin(),arr.end());
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=(end-start)/2+start;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<bi_search(arr,key)<<endl;

    return 0;
}