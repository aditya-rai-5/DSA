// https://codeforces.com/contest/2109/problem/A

#include<iostream>
using namespace std;
 
bool dual(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]==arr[i+1] &&arr[i]==0){
            return false;
        }
    }
    if(sum>size-1){
        return false;
    }
    return true;
}
 
int main(){
    int n;
    cin>>n;
    while(n>0){
        int m;
        cin>>m;
        int  arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        bool h=dual(arr,m);
        if(h==true){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        n--;
    }
    return 0;
}
