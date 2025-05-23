#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int k;
        cin>>k;
        if(k%2!=0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}