// https://codeforces.com/contest/2114/problem/A

#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

vector<int> square(string n){
    int k=stoi(n);
    vector<int> ans;
    for(int i=0;i<=sqrt(k);i++){
        for(int j=0;j<=sqrt(k);j++){
            if((j+i)*(j+i)==k){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    if(ans.size()==0){
        ans.push_back(-1);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string m;
        cin>>m;
        vector<int> result=square(m);
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}