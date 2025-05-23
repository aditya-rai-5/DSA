#include<iostream>
using namespace std;

bool check_power(int n,long int x){
    if(x==1){
        return true;
    }
    if(x%n==0){
        return check_power(n,x/n);
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    long int x;
    cin>>x;
    if(check_power(n,x)==true){
        cout<<true;
    }
    else{
        cout<<false;
    }

    return 0;
}