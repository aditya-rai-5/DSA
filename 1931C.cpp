#include<iostream>

using namespace std;

int make_equal(int arr[], int size){
    for(int i=0;i<size;i++){
        if(arr[0]!=arr[size-1]){
            if(arr[0]==arr[i]){
                return size-i-1;
            }
        }
        else if(arr[i]!=arr[size-i-1]&& (size%2)==0 && i!=0){
            return size-2*i;
        }
        else if (arr[i]!=arr[size-i-1]&& (size%2)==1 && i!=0){
            return size-2*i-1;
        }
        else{
            continue;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;

    while(n--){
        int m;
        cin>>m;
        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        int size=sizeof(arr)/sizeof(arr[0]);
        cout<<make_equal(arr,size)<<endl;
    }
    return 0;
}