#include<iostream>
using namespace std;

int fib(int n) {
    if(n==0||n==1 ){
        return n;
        }
    int f_1=0;
    int f_2=1;
    for(int i=2;i<=n;i++){
        int f_3=f_1+f_2;
        f_1=f_2;
        f_2=f_3;
    }
    return f_2;
}