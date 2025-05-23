#include<iostream>
#include<cmath>
using namespace std;

bool check_prime(int n){
    if(n<2){
        return false;
    }
    float m=sqrt(n);
    for(int i=2;i<=m;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"enter the input: ";
    cin>>n;

    bool prime=check_prime(n);
    if(prime==true){
        cout<<"yes the number "<<n<<" is prime"<<endl;
    }
    else{
        cout<<"no the number "<<n<<" is not a prime"<<endl;
    }

    return 0;
}