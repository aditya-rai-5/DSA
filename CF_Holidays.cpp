// https://codeforces.com/contest/670/problem/A

#include<iostream>

using namespace std;

int min_holiday(int n){
    if(n%7<5){
        return 2*(n/7);
    }
    else{
        return 2*(n/7)+(n%7-5);
    }
}

int max_holiday(int n){
    if(n%7>2){
        return 2*(n/7)+2;
    }
    else{
        return 2*(n/7)+n%7;
    }
}

int main(){
    int n;
    cin>>n;

    cout<<min_holiday(n)<<" "<<max_holiday(n)<<endl;
}