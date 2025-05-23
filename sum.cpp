#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the input: ";
    cin>>n;

    int sum=0;
    while (n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    
    cout<<"the sum of the digits is: "<<sum<<endl;

    return 0;
}