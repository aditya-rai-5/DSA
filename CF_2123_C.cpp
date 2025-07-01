#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        string s;
        int min_arr=arr[0];
        int max_arr=arr[n-1];
        for(int i=0;i<n;i++){
            min_arr=min(min_arr,arr[i]);
            max_arr=max(max_arr,arr[i]);
        }
        int a=0;
        int b=n-1;
        for(int i=0;i<n;i++){
            if(arr[i]==min_arr){
                a=i;
            }
            if(arr[n-i-1]==max_arr){
                b=n-i-1;
            }
        }
        for(int i=0;i<n;i++){
            s.append(" ");
        }
        for(int i=0;i<n;i++){
            if(i<=a) s[i]='1';
            else if(b<=i) s[i]='1';
            else s[i]='0';
        }

        cout<<s<<endl;
    }
}