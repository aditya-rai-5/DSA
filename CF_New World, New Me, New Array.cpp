#include<iostream>
using namespace std;

int min_operations(int n,int k,int p){
    if(n*p>=abs(k)&&k%p==0){
        return abs(k/p);
    }
    if(n*p>=abs(k)&&k%p!=0){
        return abs(k/p)+1;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        cout<<min_operations(n,k,p)<<endl;
    }

    return 0;
}