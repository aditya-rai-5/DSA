#include<iostream>
#include<cmath>
using namespace std;

int pair_cube(int n){
    float a=pow(n,1.0/3);
    int count=0;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=a;j++){
            if(i*i*i+j*j*j==n){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<pair_cube(n)<<endl;

    return 0;
}