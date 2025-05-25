#include<iostream>
#include<vector>
using namespace std;

bool check_sorted(vector<int> &arr){
    int n=arr.size();
    if(n==1){
        return true;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check_sorted(arr)==true){
        cout<<"yes the array is sorted"<<endl;
    }
    else{
        cout<<"the is not sorted"<<endl;
    }

    return 0;
}