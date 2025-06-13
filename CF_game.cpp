// 

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int k=1;
        int n=min(a,c);
        int m=min(b,d);
        if(n>=m){
            cout<<"Gellyfish";
        }else{
            cout<<"Flower";
        }
        cout<<endl;
    }

    return 0;
}