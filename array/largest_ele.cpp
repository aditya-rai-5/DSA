#include<iostream>
#include<cmath>
using namespace std;

int largest(int arr[], int n){
    int maxm=arr[0];
    for(int i=0;i<n;i++){
        maxm=max(maxm,arr[i]);
    }
    return maxm;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest(arr,n)<<endl;

    return 0;
}