// reverse an interger
/*Given a signed 32-bit integer x, return x with its digits reversed.
 If reversing x causes the value to go outside the signed 32-bit integer 
 range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

*/
#include<iostream>
#include<math.h>

using namespace std;

int reverse(int x) {
    long long ans=0;
    int p=0;
    int z=x;
    while(x!=0){
        p++;
        x=x/10;
    }
    while(z!=0){
        ans+=pow(10,p-1)*(z%10);
        --p;
        z=z/10;
    }
    if(ans<pow(-2,31)||ans>=pow(2,31)){
        return 0;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the input: ";
    cin>>n;
    cout<<reverse(n);

    return 0;
}