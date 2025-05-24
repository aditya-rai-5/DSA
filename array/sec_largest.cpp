#include<iostream>
using namespace std;

int sec_largest(int arr[],int n){
    int largest=-1;
    int secondLargest=-1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the second largest element is: "<<sec_largest(arr,n)<<endl;

    return 0;
}