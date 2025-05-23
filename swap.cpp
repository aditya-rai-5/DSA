#include<iostream>

using namespace std;

int main(){
    int m;
    int n;
    cin>>n>>m;
    int temp=n;
    n=m;
    m=temp;
    
    cout<<endl;
    cout<<m<<" "<<n;

    return 0;
}