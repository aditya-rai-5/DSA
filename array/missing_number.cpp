#include<iostream>
#include<vector>
using namespace std;

int missing_number(vector<int> &arr){
    int n=arr.size();
    int sum=((n+2)*(n+1))/2;
    int arr_sum=0;
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
    }

    return sum-arr_sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<missing_number(arr)<<endl;

    return 0;
}