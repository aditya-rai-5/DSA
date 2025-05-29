#include<iostream>
using namespace std;

int a_plus_b(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<a_plus_b(n)<<endl;
    }

    return 0;

}